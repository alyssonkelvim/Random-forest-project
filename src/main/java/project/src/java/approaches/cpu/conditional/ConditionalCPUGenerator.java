package project.src.java.approaches.cpu.conditional;

import project.src.java.dotTreeParser.Parser;
import project.src.java.dotTreeParser.treeStructure.Comparisson;
import project.src.java.dotTreeParser.treeStructure.Nodes.InnerNode;
import project.src.java.dotTreeParser.treeStructure.Nodes.Node;
import project.src.java.dotTreeParser.treeStructure.Nodes.OuterNode;
import project.src.java.dotTreeParser.treeStructure.Tree;
import project.src.java.util.FileBuilder;

import java.util.HashMap;
import java.util.LinkedList;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.IntStream;

public class ConditionalCPUGenerator {

	public static final int NUM_THREADS = 4;
	public static void execute(List<Tree> trees, String dataset) {
    	System.out.println("Generating code...");
        String sourceCode = new String();

        
        sourceCode += generateIncludesAndStruct(Parser.featuresNames.size(), Parser.samplesQuantity);
        sourceCode += generateThreadAndTrees(Parser.featuresNames.size(), Parser.classesNames.size(), trees);
        sourceCode += generateParallelCall(Parser.featuresNames.size());
        sourceCode += generateAuxFunctions(dataset);
        sourceCode += generateMain(Parser.featuresNames.size());
        
        
        System.out.println("Writing File...");
        FileBuilder.execute(sourceCode, "cpu/conditional/rf_with_if.c");
    }

	private static String generateMain(int featuresQuantity) {
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
				+ "\n";
		
		code += "float" + IntStream.range(0, featuresQuantity)
				.mapToObj(t -> " *h_"+t)
				.collect(Collectors.joining(","))
				+ ";\n";
		code += "\t\tint *h_P, *hostRef;\r\n";
		code += IntStream.range(0, featuresQuantity)
				.mapToObj(t -> "   h_"+t+" = (float *)malloc(nBytes);")
				.collect(Collectors.joining("\n"));
		code += "    \n\nh_P = (int *)malloc(nBytes);\r\n"
				+ "    hostRef = (int *)malloc(nBytes);\r\n"
				+ "\r\n"
				+ "    printf(\"Start Reading Dataset\\n\");\r\n";
		code += "float* h["+featuresQuantity+"] = {";
		code += IntStream.range(0, featuresQuantity)
				.mapToObj(t -> " h_"+t)
				.collect(Collectors.joining(","));
		code += "};\r\n"
				+ "	readInFile(h);\r\n"
				+ "	printf(\"Finished Reading Dataset\\n\");\r\n"
				+ "\r\n"
				+ "    // Obter o tempo inicial\r\n"
				+ "    clock_t start_time = clock();\r\n"
				+ "    // Execução do algoritmo paralelo\n\n";
		code += "    RF_with_IF_parallel(";
		code += IntStream.range(0, featuresQuantity)
				.mapToObj(t -> " h_"+t)
				.collect(Collectors.joining(","));
		code += ", h_P, nElem);\r\n"
				+ "     // Obter o tempo final\r\n"
				+ "    clock_t end_time = clock();\r\n"
				+ "    // Calcular o tempo decorrido em segundos\r\n"
				+ "    elapsed_time = ((float)(end_time - start_time)*1000.0) / ((float)CLOCKS_PER_SEC);\r\n"
				+ "    registerTime(elapsed_time);\r\n"
				+ "\r\n"
				+ "    writeOutFile(h_P, nElem);\r\n"
				+ "\r\n"
				+ "    // Liberação da memória do host\n\n";
		code += IntStream.range(0, featuresQuantity)
				.mapToObj(t -> "    free(h_"+t+");")
				.collect(Collectors.joining("\n"));
		code += "\n    free(h_P);\r\n"
				+ "    free(hostRef);\r\n"
				+ "\r\n"
				+ "    return 0;\r\n"
				+ "}\r\n"
				+ "";
		return code;
	}

	private static String generateAuxFunctions(String dataset) {
		return "\r\n"
				+ "void initialData(float *ip, int size)\r\n"
				+ "{\r\n"
				+ "    for (int i = 0; i < size; i++) {\r\n"
				+ "        ip[i] = (float)(rand() & 15);\r\n"
				+ "    }\r\n"
				+ "}\r\n"
				+ "\r\n"
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
				+ "}\r\n"
				+ "";
	}

	private static String generateParallelCall(int featuresQuantity) {
		String code = "void RF_with_IF_parallel(";
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
				+ "        threads[i] = CreateThread(NULL, 0, RF_with_IF_thread, &thread_data[i], 0, NULL);\r\n"
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

	private static String generateThreadAndTrees(int featuresQuantity, int classesQuantity, List<Tree> trees) {
		String code = "DWORD WINAPI RF_with_IF_thread(LPVOID arg)\r\n"
				+ "{\r\n"
				+ "    ThreadData* data = (ThreadData*)arg;\r\n"
				+ "    int thread_id = data->thread_id;\r\n"
				+ "    int start = data->start;\r\n"
				+ "    int end = data->end;";
		
		code += IntStream.range(0, featuresQuantity)
				.mapToObj(t -> "    float *F"+t+" = data->F"+t+";\r\n")
				.collect(Collectors.joining(""));
		code += "	int *P = data->P;\r\n"
				+ "\r\n"
				+ "    for (int i = start; i < end; i++) {";
		code += "int Class["+classesQuantity+"];\r\n";
		code += IntStream.range(0, classesQuantity)
				.mapToObj(t -> "        Class["+t+"] = 0;")
				.collect(Collectors.joining(""));
		
		code += generateIfTrees(trees);
		
		return code;
	}
	
	private static String generateIfTrees(List<Tree> trees) {
        var code = "\n\n";
        code += trees.stream()
            .map(ts -> generateIfTree(ts.getRoot(), 2))
            .collect(Collectors.joining("\n"));
        code += generateComparissons(trees.get(0).getClassQuantity());
        code += "\n\t}\n    return 0;\r\n\n}\n\n";
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
	private static String generateIncludesAndStruct(int featuresQuantity, int numElements) {
		String code = "#include <stdio.h>\r\n"
				+ "#include <stdlib.h>\r\n"
				+ "#include <windows.h>\r\n"
				+ "#include <time.h>\r\n"
				+ "\n";
		
		code += "#define NUM_THREADS " + NUM_THREADS + "\r\n";
		code += "#define N_ELEM " + numElements + "\r\n";
		code += "#define MAX_LINE_LENGTH 1000\r\n";
		code += "typedef struct {\r\n" 
				+ "    int thread_id;\r\n"
				+ "    int start;\r\n"
				+ "    int end;\r\n";
		code += IntStream.range(0, featuresQuantity)
				.mapToObj(t -> "    float *F"+t+";\r\n")
				.collect(Collectors.joining(""));
		code += "    int *P;\r\n"
				+ "} ThreadData;\n";
		return code;
	}
	
	private static String decodeToIf(Comparisson comparisson) {
        return "F" + comparisson.getColumn() + "[i]" 
            + comparisson.getComparissonType() + " " 
            + comparisson.getThreshold();
    }
	
}
