package project.src.java.approaches.gpu.table;

import project.src.java.dotTreeParser.Parser;
import project.src.java.dotTreeParser.treeStructure.Nodes.InnerNode;
import project.src.java.dotTreeParser.treeStructure.Nodes.Node;
import project.src.java.dotTreeParser.treeStructure.Nodes.OuterNode;
import project.src.java.dotTreeParser.treeStructure.Tree;
import project.src.java.util.FileBuilder;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.IntStream;



public class TableConstantGPUGenerator {
	public static void execute(List<Tree> trees, String dataset) {
    	System.out.println("Generating code...");
        String sourceCode = new String();

        sourceCode += generateMasksandIncludes(trees);
        sourceCode += generateAuxiliarFunctions(dataset);
        sourceCode += generateThreadAndTrees(Parser.featuresNames.size(), Parser.classesNames.size(), trees);
        sourceCode += generateMainFunction(Parser.featuresNames.size(), Parser.samplesQuantity);
        
        System.out.println("Writing File...");
        FileBuilder.execute(sourceCode, "gpu/table/constant/rf_with_table.cu");
    }
	
	private static String generateMasksandIncludes(List<Tree> trees) {
		String code = "#include <stdio.h>\r\n"
				+ "#include <sys/time.h>\r\n"
				+ "#include <cuda_runtime.h>\r\n"
				+ "\r\n"
				+ "#define FLAG_NODE_LEAF_MASK 0x80000000\r\n"
				+ "#define COLUMN_MASK 0x7C000000\r\n"
				+ "#define RIGHT_INDEX_MASK 0x03FFE000\r\n"
				+ "#define LEFT_INDEX_MASK 0x00001FFF\r\n"
				+ "#define CLASS_MASK 0x03FFE000\r\n"
				+ "#define NEXT_TREE_INDEX_MASK 0x00001FFF\r\n"
				+ "\r\n"
				+ "#define GET_FLAG_NODE_LEAF(x) ((x & FLAG_NODE_LEAF_MASK) >> 31)\r\n"
				+ "#define GET_COLUMN(x) ((x & COLUMN_MASK) >> 26)\r\n"
				+ "#define GET_RIGHT_INDEX(x)  ((x & RIGHT_INDEX_MASK) >> 13)\r\n"
				+ "#define GET_LEFT_INDEX(x)  (x & LEFT_INDEX_MASK)\r\n"
				+ "#define GET_CLASS(x)  ((x & CLASS_MASK) >> 13)\r\n"
				+ "#define GET_NEXT_TREE_INDEX(x)  (x & NEXT_TREE_INDEX_MASK)"
				+ "\r\n"
				+ "#define NUM_THREADS 4\r\n"
				+ "#define N_ELEM "+Parser.samplesQuantity+"\r\n"
				+ "#define MAX_LINE_LENGTH 1000\r\n"
				+ "\r\n"
				+ "#define CHECK(call)                                                            \\\r\n"
				+ "{                                                                              \\\r\n"
				+ "    const cudaError_t error = call;                                            \\\r\n"
				+ "    if (error != cudaSuccess)                                                  \\\r\n"
				+ "    {                                                                          \\\r\n"
				+ "        fprintf(stderr, \"Error: %s:%d, \", __FILE__, __LINE__);                 \\\r\n"
				+ "        fprintf(stderr, \"code: %d, reason: %s\\n\", error,                       \\\r\n"
				+ "                cudaGetErrorString(error));                                    \\\r\n"
				+ "    }                                                                          \\\r\n"
				+ "}"
				+ "\r\n"
				+ "\r\n";
		code += "    " + generateTreeVector(trees);
		code += "    " + generateThresholdVector(trees);
		code = code.replaceAll("%TABLE_SIZE%", tableSize+"");
		return code;
	}
	
	private static String generateAuxiliarFunctions(String dataset) {
		return "\r\n"
				+ "void setup_table_constant (void)\n"
				+ "{\n"
				+ "    CHECK(cudaMemcpyToSymbol( table, tableData, "+tableSize+" * sizeof(int)));\n"
				+ "    CHECK(cudaMemcpyToSymbol( thresholds, thresholdsData, "+tableSize+" * sizeof(float)));\n"
				+ "}\n\n"
				+ ""
				+ "void readInFile(float **ip) {\r\n"
				+ "    FILE *file = fopen(\"assets/datasets/"+dataset+".csv\",\"r\");\r\n"
				+ "    if (file == NULL) {\r\n"
				+ "        printf(\"[CUDA]: Failed to open the file.\\n\");\r\n"
				+ "        exit(1);\r\n"
				+ "    }\r\n"
				+ "\r\n"
				+ "    char line[MAX_LINE_LENGTH];\r\n"
				+ "    \r\n"
				+ "    int row = 0;\r\n"
				+ "    fgets(line, sizeof(line), file);\r\n"
				+ "    while (fgets(line, sizeof(line), file)) {\r\n"
				+ "        char *token = strtok(line, \",\");\r\n"
				+ "        \r\n"
				+ "        int column = 0;\r\n"
				+ "        while (token != NULL) {\r\n"
				+ "            ip[column][row] = atof(token);\r\n"
				+ "            token = strtok(NULL, \",\");\r\n"
				+ "            column++;\r\n"
				+ "        }\r\n"
				+ "\r\n"
				+ "        row++;\r\n"
				+ "        if(row > N_ELEM) break;\r\n"
				+ "    }\r\n"
				+ "\r\n"
				+ "    fclose(file);\r\n"
				+ "}\r\n"
				+ "\r\n"
				+ "void writeOutFile(int *h, int size)\r\n"
				+ "{\r\n"
				+ "    FILE *file = fopen(\"out_rf_table_gpu.csv\", \"w\");\r\n"
				+ "    if (file == NULL) {\r\n"
				+ "        printf(\"[CUDA]: Failed to open the file.\\n\");\r\n"
				+ "        return;\r\n"
				+ "    }\r\n"
				+ "\r\n"
				+ "    for (int i = 0; i < size; i++) {\r\n"
				+ "        fprintf(file, \"%d\\n\", h[i]);\r\n"
				+ "    }\r\n"
				+ "\r\n"
				+ "    fclose(file);\r\n"
				+ "}\r\n"
				+ "\r\n"
				+ "void registerTime(float value) {\r\n"
				+ "    FILE *file = fopen(\"results/results.csv\", \"a\"); // Abre o arquivo no modo de \"acrescentar\" (append)\r\n"
				+ "    if (file == NULL) {\r\n"
				+ "        printf(\"[CUDA]: Falha ao abrir o arquivo results.csv.\\n\");\r\n"
				+ "        return;\r\n"
				+ "    }\r\n"
				+ "\r\n"
				+ "    fprintf(file, \",%.2f\", value); // Escreve o valor no arquivo, separado por vírgula\r\n"
				+ "    fclose(file);\r\n"
				+ "}\r\n\n";
	}
	
	private static String generateThreadAndTrees(int featuresQuantity, int classesQuantity, List<Tree> trees) {
		
		String features = IntStream.range(0, featuresQuantity)
	            .mapToObj( i -> "float *F"+i)
	            .collect(Collectors.joining(", "));
	    String code = "__global__ void RF_with_table("+features+", int *P, const int N){\n";

	    code += "    int i = blockIdx.x * blockDim.x + threadIdx.x;\n";
		code += "    float* h["+featuresQuantity+"] = { ";
		code += IntStream.range(0, featuresQuantity)
				.mapToObj(t -> "F"+t)
				.collect(Collectors.joining(", "));
		code +=  "};\r\n\n\n";
       
		
		code += "\n\n    if(i < N) {\r\n";
		code += "        int Class["+classesQuantity+"];\r\n";
		code += IntStream.range(0, classesQuantity)
				.mapToObj(t -> "        Class["+t+"] = 0;")
				.collect(Collectors.joining("\r\n"));
		code += "\n        int index = 0;\r\n";
		code += "\n        while(index < "+tableSize+"){\r\n"
				+ "            //Flag:0 -> Nó Interno, Flag:1 -> Folha\r\n"
				+ "            if(!GET_FLAG_NODE_LEAF(table[index])){\r\n"
				+ "                if(h[GET_COLUMN(table[index])][i] <= thresholds[index]){\r\n"
				+ "                    index = GET_LEFT_INDEX(table[index]);\r\n"
				+ "                } else {\r\n"
				+ "                    index = GET_RIGHT_INDEX(table[index]);\r\n"
				+ "                }\r\n"
				+ "            } else {\r\n"
				+ "                Class[GET_CLASS(table[index])]++; \r\n"
				+ "                index = GET_NEXT_TREE_INDEX(table[index]);\r\n"
				+ "            }\r\n"
				+ "        }\n\n";
		
		code += generateComparissons(Parser.classesNames.size());
		code += "\n    }";
		code += "\n}\n\n";
		return code;
	}
	
	public static String generateComparissons(int classQuantity){
        LinkedList<String> queue = new LinkedList<String>();
        HashMap<String, String> map = new HashMap<String, String>();
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
        comparisson += "\t\tP[i] = "+map.get(queue.remove())+";";

        return comparisson;
    }
	
	private static int tableSize = 0;
	private static String generateThresholdVector(List<Tree> trees) {
		String code = "__constant__ float thresholds[%TABLE_SIZE%];\n";
		code += "float thresholdsData[] = \n\t{ %VALUES% };\n";
		String values = trees.stream()
			.map(t -> 
				generateThresholds(t.getRoot(), new ArrayList<Float>())
					.stream()
					.map(Object::toString)
					.collect(Collectors.joining(", ")))
			.collect(Collectors.joining(", \n\t"));
		code = code.replaceAll("%VALUES%", values);
		tableSize = values.split(",").length;
		return code + "\n\n";
	}
	
	

    private static List<Float> generateThresholds(Node node, List<Float> thresholds) {
        
        if(node instanceof OuterNode){
            thresholds.add(0.0f);
        }else{
            var innerNode = (InnerNode) node;
            thresholds.add(innerNode.getComparisson().getThreshold());
            generateThresholds(innerNode.getLeftNode(), thresholds);
            generateThresholds(innerNode.getRightNode(), thresholds);
        }
        return thresholds;
    }

    private static String generateTreeVector(List<Tree> trees) {
    	ArrayList<ArrayList<Integer>> lists = new ArrayList<>();
    	int offset = 0;
    	String code = "__constant__ int table[%TABLE_SIZE%];\n";
    	code += "int tableData[] = \n\t{ %VALUES% };\n";
    	for(Tree t : trees){
			var table = new ArrayList<Integer>();
			generateTree(t.getRoot(),table, 0, offset);
			offset += table.size();
			ajustNextTreeIndex(table, offset);
			lists.add(table);
			/*for (int valor : table) {
	            String binario = Integer.toBinaryString(valor);
	            String formatoBinario = String.format("%32s", binario).replace(' ', '0');
	            System.out.println(formatoBinario);
	        }*/
		};
		
		var values = lists.stream()
			.map(l -> l.stream()
					.map(Object::toString)
					.collect(Collectors.joining(", ")))
			.collect(Collectors.joining(",\n\t"));
		
		code = code.replaceAll("%VALUES%", values);
		
		return code + "\n\n";
	}

    private static void ajustNextTreeIndex(ArrayList<Integer> table, int offset) {
    	for (int i = 0; i < table.size(); i++) {
            int item = table.get(i);
            String binario = Integer.toBinaryString(item);
            String formatoBinario = String.format("%32s", binario).replace(' ', '0');
            if(formatoBinario.charAt(0) == '1') {
            	var offsetBinary = String.format("%13s", Integer.toBinaryString(offset)).replace(' ', '0');
            	formatoBinario = formatoBinario.substring(0, 19) + offsetBinary;
            	table.set(i, binaryToDecimal(formatoBinario));
            }
            
        }
	}

	private static int generateTree(Node node, List<Integer> table, int index, int offset) {
        String binary = "";
        int rightIndex = 0, leftIndex = 0;
        if(node instanceof OuterNode){
        	var outerNode = (OuterNode) node;
        	var flag = "-";
        	var column = "00000";
        	var classValue = String.format("%13s", Integer.toBinaryString(outerNode.getClassNumber())).replace(' ', '0');
        	var temporaryValueForNextTree = "0000000000000";
        	binary = flag + column + classValue + temporaryValueForNextTree;
            table.add(binaryToDecimal(binary));
            rightIndex = index;
        }else{
            var innerNode = (InnerNode) node;
            var flag = "0";
        	var column = String.format("%5s", Integer.toBinaryString(innerNode.getComparisson().getColumn())).replace(' ', '0');
            table.add(0);
            leftIndex = generateTree(innerNode.getLeftNode(), table, index + 1, offset);
            rightIndex = generateTree(innerNode.getRightNode(), table, leftIndex + 1, offset);
            var leftIndexBinary = String.format("%13s", Integer.toBinaryString(index + 1 + offset)).replace(' ', '0');
            var rightIndexBinary = String.format("%13s", Integer.toBinaryString(leftIndex + 1 + offset)).replace(' ', '0');
            binary = flag + column + rightIndexBinary + leftIndexBinary;
            table.set(index, Integer.parseInt(binary, 2));
        }
        return Integer.max(rightIndex, leftIndex);
    }
	
	private static int binaryToDecimal(String binaryString) {
        if (binaryString.charAt(0) == '0') {
            // Se o primeiro bit for 0, o valor é positivo e pode ser convertido diretamente para inteiro
            return Integer.parseInt(binaryString, 2);
        } else {
            // Se o primeiro bit for 1, é uma representação em complemento de 2
            StringBuilder invertedString = invertBinaryString(binaryString);
            int invertedValue = Integer.parseInt(invertedString.toString(), 2);
            int decimalValue = -(invertedValue + 1);
            return decimalValue;
        }
    }

    private static StringBuilder invertBinaryString(String binaryString) {
        StringBuilder invertedString = new StringBuilder();
        for (char bit : binaryString.toCharArray()) {
            invertedString.append(bit == '0' ? '1' : '0');
        }
        return invertedString;
    }
    
    private static String generateMainFunction(int featureQuantity, int samplesQuantity) {
        String code =  "int main(int argc, char ** argv) {\n" +
        "     \n" +
        "    float elapsed_time;\n" +
        "    // set up device\n" +
        "    int dev = 0;\n" +
        "    cudaDeviceProp deviceProp;\n" +
        "    CHECK(cudaGetDeviceProperties(&deviceProp, dev));\n" +
        "    printf(\"[CUDA]: Using Device %d: %s\\n\", dev, deviceProp.name);\n" +
        "    CHECK(cudaSetDevice(dev));\n" +
        "\n" +
        "    // set up data size of vectors\n" +
        "    int nElem = "+samplesQuantity+";\n" +
        "    printf(\"[CUDA]: Vector Size %d\\n\", nElem);\n" +
        "\n" +
        "    // malloc host memory\n" +
        "    size_t nBytes = nElem * sizeof(float);\n" +
        "\n" +
        "    float %_DECLARING_FEATURES_%;\n" +
        "    int * h_P, * hostRef;\n" +
        "%_MALLOC_FEATURES_%\n" +
        "    hostRef = (int * ) malloc(nBytes);\n" +
        "    h_P = (int * ) malloc(nBytes);\n" +
        "\n" +
        "%_INICITALIZE_FEATURES_%\n" +
        "\n" +
        "  setup_table_constant();\n" +
        "    memset(hostRef, 0, nBytes);\n" +
        "    memset(h_P, 0, nBytes);\n" +
        "\n" +
        "    // malloc device global memory\n" +
        "    float %_DECLARING_GLOBAL_MEMORY_%;\n" +
        "    int * d_P;\n" +
        "%_MALLOC_GLOBAL_MEMORY_%\n" +
        "    CHECK(cudaMalloc((int ** ) & d_P, nBytes));\n\n" +
        "\n" +
        "    // transfer data from host to device\n" +
        "%_TRANSFER_DATA_TO_DEVICE_%" +
        "\n" +
        "    // invoke kernel at host side\n" +
        "    int iLen = 512;\n" +
        "    dim3 block(iLen);\n" +
        "    dim3 grid((nElem + block.x - 1) / block.x);\n" +
        "\n" +
        "    cudaEvent_t start, stop;\n" +
        "    CHECK(cudaEventCreate( & start));\n" +
        "    CHECK(cudaEventCreate( & stop));\n" +
        "    // record start event\n" +
        "    CHECK(cudaEventRecord(start, 0));\n" +
        "    RF_with_table << < grid, block >>> (%_VARIABLES_%, d_P, nElem);\n" +
        "    CHECK(cudaEventRecord(stop, 0));\n" +
        "    CHECK(cudaEventSynchronize(stop));\n" +
        "    // calculate elapsed time\n" +
        "    CHECK(cudaEventElapsedTime( & elapsed_time, start, stop));\n" +
        "    printf(\"[CUDA]: RF with Table (constant memory) - execution time = %.6fms\\n\", elapsed_time);\n" +
        "\n" +
        "    registerTime(elapsed_time);\n" +
        "    CHECK(cudaMemcpy(h_P, d_P, nBytes, cudaMemcpyDeviceToHost));\n" +
        "    CHECK(cudaEventCreate( & start));\n" +
        "    CHECK(cudaEventCreate( & stop));\n" +
        "    cudaDeviceSynchronize();\n" +
        "    //writeOutFile(h_P, nElem);\n" +
        "\n" +
        "    CHECK(cudaGetLastError());\n" +
        "\n" +
        "    // copy kernel result back to host side\n" +
        "    CHECK(cudaMemcpy(h_P, d_P, nBytes, cudaMemcpyDeviceToHost));\n" +
        "    printf(\"\\n \");\n" +
        "\n" +
        "    // free host memory\n" +
        "%_FREE_CUDA_MEMORY_%\n" +
        "%_FREE_HOST_MEMORY_%\n" +
        "    free(hostRef);\n" +
        "\n" +
        "    return (0);\n" +
        " }";

        code = code.replace("%_DECLARING_FEATURES_%", 
            IntStream.range(0, featureQuantity)
                .mapToObj( i -> " * h_"+i+"")
                .collect(Collectors.joining(", "))
        );

        code = code.replace("%_MALLOC_FEATURES_%", 
            IntStream.range(0, featureQuantity)
                .mapToObj( i -> "\th_"+i+" = (float * ) malloc(nBytes);")
                .collect(Collectors.joining("\n"))
        );

        code = code.replace("%_INICITALIZE_FEATURES_%", 
        		"\tprintf(\"[CUDA]: Start Reading Dataset\\n\");\n"+
        		"\tfloat* h["+featureQuantity+"] = {"+
        		IntStream.range(0, featureQuantity)
                .mapToObj( i -> " h_"+i+"")
                .collect(Collectors.joining(","))
                +"};\n\treadInFile(h);\n"+
                "\tprintf(\"[CUDA]: Finished Reading Dataset\\n\");\n"
        );

        code = code.replace("%_DECLARING_GLOBAL_MEMORY_%", 
            IntStream.range(0, featureQuantity)
                .mapToObj( i -> "* d_"+i)
                .collect(Collectors.joining(", "))
        );

        code = code.replace("%_MALLOC_GLOBAL_MEMORY_%", 
            IntStream.range(0, featureQuantity)
                .mapToObj( i ->  "    CHECK(cudaMalloc((float ** ) & d_"+i+", nBytes));")
                .collect(Collectors.joining("\n"))
        );
       
        code = code.replace("%_TRANSFER_DATA_TO_DEVICE_%", 
            IntStream.range(0, featureQuantity)
                .mapToObj( i ->  "    CHECK(cudaMemcpy(d_"+i+", h_"+i+", nBytes, cudaMemcpyHostToDevice));")
                .collect(Collectors.joining("\n"))
        );
        
        code = code.replaceAll("%_VARIABLES_%", 
            IntStream.range(0, featureQuantity)
                .mapToObj( i ->  "d_"+i)
                .collect(Collectors.joining(", "))
        );
        
        code = code.replace("%_FREE_CUDA_MEMORY_%", 
                IntStream.range(0, featureQuantity)
                    .mapToObj( i ->  "    cudaFree(d_"+i+");")
                    .collect(Collectors.joining("\n")) +
                    "\n    cudaFree(d_P);"
        );
        
        code = code.replace("%_FREE_HOST_MEMORY_%", 
            IntStream.range(0, featureQuantity)
                .mapToObj( i ->  "    free(h_"+i+");")
                .collect(Collectors.joining("\n"))
        );
        
        return code;
    }
}
