package project.src.java.approaches.gpu.calc;


import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.Queue;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

import project.src.java.dotTreeParser.Parser;
import project.src.java.dotTreeParser.treeStructure.Comparisson;
import project.src.java.dotTreeParser.treeStructure.Tree;
import project.src.java.dotTreeParser.treeStructure.Nodes.InnerNode;
import project.src.java.dotTreeParser.treeStructure.Nodes.Node;
import project.src.java.dotTreeParser.treeStructure.Nodes.OuterNode;
import project.src.java.util.FileBuilder;



public class CalcGPUGenerator {
    static List<List<OuterNode>> outerNodesLists = new ArrayList<>();

    public static void execute(List<Tree> trees, String dataset) {
    	System.out.println("Generating code...");
        String sourceCode = new String();
        for(Tree tree : trees) {
	        int level = GraphAdapter.calculateLevels(tree.getRoot());
	        GraphAdapter.fillTree((InnerNode) tree.getRoot(), level, tree);
	        outerNodesLists.add(GraphAdapter.identifyOuterNodes(tree.getRoot()));
	        //GraphAdapter.drawTree(tree.getRoot(), "", true);
	        //System.out.println("\n\n\n\n\n");
        }
        
        sourceCode += CalcTestFileGenerator.generateFunctions(dataset);
        sourceCode += generateFunctionSignature(trees.size());
        sourceCode += generateClassInitialization(Parser.classesNames.size());
        sourceCode += generateCalcTrees(trees);
        sourceCode += CalcTestFileGenerator.generateMainFunction(Parser.featuresNames.size(), Parser.samplesQuantity, trees.size());
        
        System.out.println("Writing File...");
        FileBuilder.execute(sourceCode, "gpu/calc/rf_with_calc.cu");
    }
    
    private static String generateCalcTrees(List<Tree> trees) {
    	var code = IntStream.range(0, Parser.classesNames.size())
                .mapToObj(i -> "\tClass["+i+"] = 0;")
                .collect(Collectors.joining("\n"));
    	code += "\n\tif (i < N) {\n";
    	
    	for (int i = 0; i < trees.size(); i++) {
    		code += generateCalcTree(trees.get(i), i);
		}
    	code += generateComparissons(Parser.classesNames.size());
        code += "\n\t}\n}";
    	return code;
    }

    private static String generateCalcTree(Tree tree, int treeNumber) {
    	String code = "\n\t\t__shared__ int classesTree"+treeNumber + "[] = {%_CLASSES_%};\n";

    	var outerNodes = outerNodesLists.get(treeNumber);
    	var classes = outerNodes.stream().map(n -> n.getClassNumber()+"").collect(Collectors.joining(","));
    	code = code.replaceAll("%_CLASSES_%", classes);
    	var levelNumber = 0;
    	var n = 0;
        Queue<InnerNode> queue = new LinkedList<>();

    	for(int i=0;i<outerNodes.size();i+=4) {
    		
    		/*            n1
    		 *           /  \
    		 *         n2    n3
    		 *        /  \  /  \
    		 *       o1  o2 o3  o4
    		 */
    		var t = "t"+treeNumber+"_"+levelNumber+"_"+n;
    		var o1 = outerNodes.get(i);
    		var o3 = outerNodes.get(i+2);
    		var n2 = o1.getFather();
    		var n3 = o3.getFather();
    		var n1 = n2.getFather();
    		
    		code += "\n\t\tint r"+t+" = (F"+n1.getComparisson().getColumn()+"[i] "+n1.getComparisson().getComparissonType()+" ("+n1.getComparisson().getThreshold()+" + offset"+treeNumber+"));";
    		code += "\n\t\tint "+t+" = r"+t+" * (2 + F"+n3.getComparisson().getColumn()+"[i] "+n3.getComparisson().getComparissonType()+" ("+n3.getComparisson().getThreshold()+" + offset"+treeNumber+"));";
    		code += "\n\t\t"+t+" += (1 - r"+t+") * ( F"+n2.getComparisson().getColumn()+"[i] "+n2.getComparisson().getComparissonType()+" ("+n2.getComparisson().getThreshold()+" + offset"+treeNumber+"));\n\n";
    		if(!queue.contains(n1.getFather()))
    			queue.add(n1.getFather());
    		n++;
    	}
    	
    	levelNumber = 1;
    	int nodeLevel = queue.peek().getLevel();
    	n = 0;
    	String t ="";
    	while(!queue.isEmpty()) {
    		var ni = queue.poll();
    		if(nodeLevel != ni.getLevel()) {
    			n = 0;
    			levelNumber++;
    			nodeLevel = ni.getLevel();
    		}
    		t = "t"+treeNumber+"_"+levelNumber+"_"+n;
    		var ref1 = "t"+treeNumber+"_"+(levelNumber-1)+"_"+(n*2+1);
    		var ref2 = "t"+treeNumber+"_"+(levelNumber-1)+"_"+(n*2);
    		var index = 4*(levelNumber+1);
    		code += "\n\t\tint r"+t+" = (F"+ni.getComparisson().getColumn()+"[i] "+ni.getComparisson().getComparissonType()+" ("+ni.getComparisson().getThreshold()+" + offset"+treeNumber+"));";
    		code += "\n\t\tint "+t+" = r"+t+" * ("+index+" + "+ref1+");";
    		code += "\n\t\t"+t+" += (1 - r"+t+") * "+ref2+";";
    		code += "\n\n";
    		n++;
    		if(ni.getFather() != null && !queue.contains(ni.getFather()))
    			queue.add(ni.getFather());
    	}
    	
    	code+="\n\t\tClass[classesTree"+treeNumber+"["+t+"]]++;\n\n";

    	return code;
    }
    
    private static String generateIfTrees(List<Tree> trees) {
        var code = "\n\tif (i < N) {\n";
        code += trees.stream()
            .map(ts -> generateIfTree(ts.getRoot(), 2))
            .collect(Collectors.joining("\n"));
        code += generateComparissons(Parser.classesNames.size());
        code += "\n\t}\n}";
        return code;
    }

    
    private static String generateIfTree(Node node, int tab) {
        
        //Generating tabs for the code indentation
        //tab = 2 --> tabs = "\t\t"
        var tabs = IntStream.range(0, tab)
            .mapToObj(t -> "\t")
            .collect(Collectors.joining(""));
        if(node instanceof OuterNode){
            var outerNode = (OuterNode) node;
            return tabs + "Class[" + outerNode.getClassNumber() + "]++;\n";
        }else{
            var innerNode = (InnerNode) node;
            String code = new String();
            code += tabs + "if ("+decodeToIf(innerNode.getComparisson())+") {\n";
            code += generateIfTree(innerNode.getLeftNode(), tab + 1);
            code += tabs + "} else {\n";
            code += generateIfTree(innerNode.getRightNode(), tab + 1);
            code += tabs + "}\n";
            return code;
        }
    }

    private static String decodeToIf(Comparisson comparisson) {
        return "F" + comparisson.getColumn() + "[i]" 
            + comparisson.getComparissonType() + " (" 
            + comparisson.getThreshold()+"+ offset)";
    }

   

    private static String generateClassInitialization(int featureQuantity) {
        String code = "\tint i = blockIdx.x * blockDim.x + threadIdx.x;" + "\n";
        return code;
    }

    private static String generateFunctionSignature(int treeQuantity) {
        String features = IntStream.range(0, treeQuantity)
            .mapToObj( i -> "const int offset"+i)
            .collect(Collectors.joining(", "));
        String code = "__global__ void RF_kernel("+features+", const int n, const int offset0, const int offset1, const int offset2, float *vR)\n{";
        return code;
    }

    public static String generateComparissons(int classQuantity){
        LinkedList queue = new LinkedList<String>();
        HashMap map = new HashMap<String, String>();
        for (int i = 0; i < classQuantity; i++) {
            var key = "Class["+i+"]";
            queue.addLast(key);
            map.put(key, i+"");
        }
        String comparisson = "";
        int cont = 0;
        while(queue.size() > 1){
            String comp1 = (String) queue.removeFirst();
            String comp2 = (String) queue.removeFirst();
            String value1 = (String) map.get(comp1);
            String value2 = (String) map.get(comp2);
            comparisson += String.format("\t\tint p%d = (%s > %s)?%s:%s;\n", cont, comp1, comp2, value1, value2);
            comparisson += String.format("\t\tint Q%d = (%s > %s)?%s:%s;\n", cont, comp1, comp2, comp1, comp2);
            queue.addLast("Q"+cont);
            map.put("Q"+cont, "p"+cont);
            cont++;
        }
        comparisson += "\t\tvR[i] = "+map.get(queue.remove())+";";

        return comparisson;
    }

}
