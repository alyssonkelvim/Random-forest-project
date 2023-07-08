package com.mycompany.randomforest.cpuGenerator.table;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

import com.mycompany.randomforest.model.Tree;
import com.mycompany.randomforest.model.Nodes.InnerNode;
import com.mycompany.randomforest.model.Nodes.Node;
import com.mycompany.randomforest.model.Nodes.OuterNode;
import com.mycompany.randomforest.parser.Parser;
import com.mycompany.randomforest.util.FileBuilder;

public class TableCPUGenerator {
	public static void execute(List<Tree> trees, String dataset) {
    	System.out.println("Generating code...");
        String sourceCode = new String();

        sourceCode += generateMasksandIncludes();
        sourceCode += generateAuxiliarFunctions(dataset);
        sourceCode += generateThreadAndTrees(Parser.featuresNames.size(), Parser.classesNames.size(), trees);
        sourceCode += generateParallelCall(Parser.featuresNames.size());
        sourceCode += generateMain(trees);
        
        System.out.println("Writing File...");
        FileBuilder.execute(sourceCode, "cpu/table/rf_with_table.c");
    }
	
	private static String generateAuxiliarFunctions(String dataset) {
		return "\r\n"
				+ "void readInFile(float **ip) {\r\n"
				+ "    FILE *file = fopen(\"C:/Users/akcsa/OneDrive/Documentos/Projetos/Random Forest/randomforest/RandomForest/assets/datasets/"+dataset+".csv\", \"r\");\r\n"
				+ "    if (file == NULL) {\r\n"
				+ "        printf(\"Failed to open the file.\\n\");\r\n"
				+ "        exit(1);\r\n"
				+ "    }\r\n"
				+ "\r\n"
				+ "    char line[MAX_LINE_LENGTH];\r\n"
				+ "    \r\n"
				+ "    int row = 0;\r\n"
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
				+ "    FILE *file = fopen(\"out_rf_if_cpu.csv\", \"w\");\r\n"
				+ "    if (file == NULL) {\r\n"
				+ "        printf(\"Failed to open the file.\\n\");\r\n"
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
				+ "    FILE *file = fopen(\"results.csv\", \"a\"); // Abre o arquivo no modo de \"acrescentar\" (append)\r\n"
				+ "    if (file == NULL) {\r\n"
				+ "        printf(\"Falha ao abrir o arquivo results.csv.\\n\");\r\n"
				+ "        return;\r\n"
				+ "    }\r\n"
				+ "\r\n"
				+ "    fprintf(file, \",%.2f\", value); // Escreve o valor no arquivo, separado por vírgula\r\n"
				+ "    fclose(file);\r\n"
				+ "};";
	}

	private static String generateMain(List<Tree> trees) {
		String code = "int main(int argc, char **argv)\r\n"
				+ "{\r\n"
				+ "    float elapsed_time;\r\n"
				+ "\r\n"
				+ "    // Configuração dos dados\r\n"
				+ "    int nElem = N_ELEM;\r\n"
				+ "    printf(\"Vector Size %d\\n\", nElem);\r\n"
				+ "\r\n"
				+ "    // Alocação de memória do host\r\n"
				+ "    size_t nBytes = nElem * sizeof(float);\r\n"
				+ "\r\n"
				+ "    float %_H_DECLARATION_%;\r\n"
				+ "    int *h_P, *hostRef;\r\n"
				+ "%_BYTES_ALLOCATION_%\r\n"
				+ "    h_P = (int *)malloc(nBytes);\r\n"
				+ "    hostRef = (int *)malloc(nBytes);\r\n"
				+ "\r\n"
				+ "    printf(\"Start Reading Dataset\\n\");\r\n"
				+ "    float* h[" + Parser.featuresNames.size() + "] = { %_H_VECTOR_% };\r\n"
				+ "    readInFile(h);\r\n"
				+ "    printf(\"Finished Reading Dataset\\n\");\r\n"
				+ "\r\n"
				+ "    // Obter o tempo inicial\r\n"
				+ "    clock_t start_time = clock();\r\n"
				+ "    // Execução do algoritmo paralelo\r\n"
				+ "\r\n"
				+ "    RF_with_table_parallel( %_H_VECTOR_%, h_P, nElem);\r\n"
				+ "     // Obter o tempo final\r\n"
				+ "    clock_t end_time = clock();\r\n"
				+ "    // Calcular o tempo decorrido em segundos\r\n"
				+ "    elapsed_time = ((float)(end_time - start_time)*1000.0) / ((float)CLOCKS_PER_SEC);\r\n"
				+ "    registerTime(elapsed_time);\r\n"
				+ "\r\n"
				+ "    writeOutFile(h_P, nElem);\r\n"
				+ "\r\n"
				+ "    // Liberação da memória do host\r\n"
				+ "\r\n"
				+ "%_FREE_MEMORY_%\r\n"
				+ "    free(h_P);\r\n"
				+ "    free(hostRef);\r\n"
				+ "\r\n"
				+ "    return 0;\r\n"
				+ "}\n\n\n";
		
				code = code.replace("%_H_DECLARATION_%", 
			            IntStream.range(0, Parser.featuresNames.size())
			                .mapToObj( i -> "*h_" + i)
			                .collect(Collectors.joining(", "))
				);
				
				code = code.replace("%_BYTES_ALLOCATION_%", 
			            IntStream.range(0, Parser.featuresNames.size())
			                .mapToObj( i -> "    h_"+i+" = (float *)malloc(nBytes);")
			                .collect(Collectors.joining("\r\n"))
				);
				
				code = code.replace("%_H_VECTOR_%", 
			            IntStream.range(0, Parser.featuresNames.size())
			                .mapToObj( i -> "h_" + i)
			                .collect(Collectors.joining(", "))
				);
				
				code = code.replace("%_FREE_MEMORY_%", 
			            IntStream.range(0, Parser.featuresNames.size())
			                .mapToObj( i -> "    free(h_"+i+");")
			                .collect(Collectors.joining("\r\n"))
				);
				
				
						
		return code;
	}

	private static String generateMasksandIncludes() {
		String code = "#include <stdio.h>\r\n"
				+ "#include <stdlib.h>\r\n"
				+ "#include <windows.h>\r\n"
				+ "#include <time.h>\r\n"
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
				+ "\r\n"
				+ "\r\n";
		code += "typedef struct {\r\n" 
				+ "    int thread_id;\r\n"
				+ "    int start;\r\n"
				+ "    int end;\r\n";
		code += IntStream.range(0, Parser.featuresNames.size())
				.mapToObj(t -> "    float *F"+t+";\r\n")
				.collect(Collectors.joining(""));
		code += "    int *P;\r\n"
				+ "} ThreadData;\n";
		return code;
	}

	private static String generateThreadAndTrees(int featuresQuantity, int classesQuantity, List<Tree> trees) {
		String code = "DWORD WINAPI RF_with_table_thread(LPVOID arg)\r\n"
				+ "{\r\n"
				+ "    ThreadData* data = (ThreadData*)arg;\r\n"
				+ "    int thread_id = data->thread_id;\r\n"
				+ "    int start = data->start;\r\n"
				+ "    int end = data->end;";
		
		code += IntStream.range(0, featuresQuantity)
				.mapToObj(t -> "    float *F"+t+" = data->F"+t+";\r\n")
				.collect(Collectors.joining(""));
		code += "	int *P = data->P;\r\n"
				+ "\r\n";

		code += "    float* h["+featuresQuantity+"] = { ";
		code += IntStream.range(0, featuresQuantity)
				.mapToObj(t -> "F"+t)
				.collect(Collectors.joining(", "));
		code +=  "};\r\n\n\n";
        code += "    " + generateTreeVector(trees);
		code += "    " + generateThresholdVector(trees);
		
		code += "\n\n    for (int i = start; i < end; i++) {\r\n";
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
	
	private static String generateParallelCall(int featuresQuantity) {
		String code = "void RF_with_table_parallel(";
		code += IntStream.range(0, featuresQuantity)
		.mapToObj(t -> "float *F"+t)
		.collect(Collectors.joining(","));
		code += ", int *P, const int N)\n";
		code += "{\r\n"
				+ "    HANDLE threads[NUM_THREADS];\r\n"
				+ "    ThreadData thread_data[NUM_THREADS];\r\n"
				+ "\r\n"
				+ "    int chunk_size = N / NUM_THREADS;\r\n"
				+ "    int remainder = N % NUM_THREADS;\r\n"
				+ "    int start = 0;\r\n"
				+ "\r\n"
				+ "    for (int i = 0; i < NUM_THREADS; i++) {\r\n"
				+ "        int end = start + chunk_size;\r\n"
				+ "        if (i < remainder)\r\n"
				+ "            end++;\r\n"
				+ "\r\n"
				+ "        thread_data[i].thread_id = i;\r\n"
				+ "        thread_data[i].start = start;\r\n"
				+ "        thread_data[i].end = end;\n\n";
		code += IntStream.range(0, featuresQuantity)
				.mapToObj(t -> "        thread_data[i].F"+t+" = F"+t+";\r\n")
				.collect(Collectors.joining(""));
		code += "\n\t\tthread_data[i].P = P;"
				+ "\r\n"
				+ "        threads[i] = CreateThread(NULL, 0, RF_with_table_thread, &thread_data[i], 0, NULL);\r\n"
				+ "\r\n"
				+ "        start = end;\r\n"
				+ "    }\r\n"
				+ "\r\n"
				+ "    WaitForMultipleObjects(NUM_THREADS, threads, TRUE, INFINITE);\r\n"
				+ "\r\n"
				+ "    for (int i = 0; i < NUM_THREADS; i++) {\r\n"
				+ "        CloseHandle(threads[i]);\r\n"
				+ "    }\r\n"
				+ "}";
		return code;
	}
	
	private static int tableSize = 0;
	private static String generateThresholdVector(List<Tree> trees) {
		String code = "float thresholds[] = \n\t{ %VALUES% };";
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
    	String code = "int table[] = \n\t{ %VALUES% };";
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
	
}
