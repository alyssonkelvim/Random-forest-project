package project.src.java.approaches.gpu.calc;

import project.src.java.Main;
import project.src.java.dotTreeParser.Parser;
import project.src.java.dotTreeParser.treeStructure.Tree;
import project.src.java.util.FileBuilder;

import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.IntStream;


public class CalcTestFileGenerator {
    public static void execute(List<Tree> trees, int featureQuantity, String dataset, int samplesQuantity){
        FileBuilder.execute(generateFunctions(dataset), "gpu/conditional/functions.cu");
        FileBuilder.execute(generateMainFunction(featureQuantity, samplesQuantity, trees.size()), "gpu/conditional/main.cu");
    }

    public static String generateMainFunction(int featureQuantity, int samplesQuantity, int treesQuantity) {
    	var offsets = IntStream.range(0, treesQuantity)
	        .mapToObj(i -> "0")
	        .collect(Collectors.joining(","));
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
        "    %_MALLOC_FEATURES_%\n" +
        "    hostRef = (int * ) malloc(nBytes);\n" +
        "    h_P = (int * ) malloc(nBytes);\n" +
        "\n" +
        "    %_INICITALIZE_FEATURES_%\n" +
        "\n" +
        "    memset(hostRef, 0, nBytes);\n" +
        "    memset(h_P, 0, nBytes);\n" +
        "\n" +
        "    // malloc device global memory\n" +
        "    float %_DECLARING_GLOBAL_MEMORY_%;\n" +
        "    int * d_P;\n" +
        "    %_MALLOC_GLOBAL_MEMORY_%\n" +
        "    CHECK(cudaMalloc((int ** ) & d_P, nBytes));\n\n" +
        "\n" +
        "    // transfer data from host to device\n" +
        "    %_TRANSFER_DATA_TO_DEVICE_%" +
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
        "    RF_kernel << < grid, block >>> (%_VARIABLES_%, nElem, "+offsets+", d_P);\n" +
        "    cudaDeviceSynchronize();\n" +
        "    CHECK(cudaEventRecord(stop, 0));\n" +
        "    CHECK(cudaEventSynchronize(stop));\n" +
        "    // calculate elapsed time\n" +
        "    CHECK(cudaEventElapsedTime( & elapsed_time, start, stop));\n" +
        "    printf(\"[CUDA]: RF without IF - execution time = %.6fms\\n\", elapsed_time);\n" +
        "\n" +
        "    registerTime(elapsed_time);\n" +
        "    CHECK(cudaMemcpy(h_P, d_P, nBytes, cudaMemcpyDeviceToHost));\n" +
        "    CHECK(cudaEventCreate( & start));\n" +
        "    CHECK(cudaEventCreate( & stop));\n";
        if(Main.calculateAccuarcy) {
	        code += "    for(int i = 0; i < nElem; i++){\n" +
	        "        writeOutFile(h_P[i]);\n" +
	        "    }\n" +
	        "\n";
        }
        code += "    CHECK(cudaGetLastError());\n" +
        "\n" +
        "    // copy kernel result back to host side\n" +
        "    CHECK(cudaMemcpy(h_P, d_P, nBytes, cudaMemcpyDeviceToHost));\n" +
        "    printf(\"\\n \");\n" +
        "\n" +
        "    // free host memory\n" +
        "    %_FREE_CUDA_MEMORY_%\n" +
        "    %_FREE_HOST_MEMORY_%\n" +
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
        		"printf(\"[CUDA]: Start Reading Dataset\\n\");\n"+
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

    public static String generateFunctions(String dataset) {
        return "#include <sys/time.h>\n" +
        "#define CHECK(call)                                                            \\\n" +
        "{                                                                              \\\n" +
        "    const cudaError_t error = call;                                            \\\n" +
        "    if (error != cudaSuccess)                                                  \\\n" +
        "    {                                                                          \\\n" +
        "        fprintf(stderr, \"Error: %s:%d, \", __FILE__, __LINE__);                 \\\n" +
        "        fprintf(stderr, \"code: %d, reason: %s\\n\", error,                       \\\n" +
        "                cudaGetErrorString(error));                                    \\\n" +
        "    }                                                                          \\\n" +
        "}\n" +
		"#define N_ELEM "+Parser.samplesQuantity+"\r\n" +
        "\n" +
        "\n" +
        "#include <cuda_runtime.h>\n" +
        "#include <stdio.h>\n" +
        "\n" +
        "\n" +
        "void initialData(float *ip, int size){\n" +
        "\n" +
        "  for (int i = 0; i < size; i++){\n" +
        "      ip[i] = (float)( rand() & 15 );\n" +
        "  }\n" +
        "  return;\n" +
        "}\n"+
        "FILE *inFile;\n" +
        "FILE *outFile;\n" +
        "\n" +
          "void readInFile(float **ip) {\r\n"
		+ "    FILE *file = fopen(\"assets/datasets/"+dataset+".csv\",\"r\");\r\n"
		+ "    if (file == NULL) {\r\n"
		+ "        printf(\"[CUDA]: Failed to open the file.\\n\");\r\n"
		+ "        exit(1);\r\n"
		+ "    }\r\n"
		+ "\r\n"
		+ "    char line[1000];\r\n"
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
		+ "}\r\n" +
        "void writeOutFile(int value){\n" + 
        "    outFile = fopen(\"out_rf.csv\",\"a\");\n" +
        "    fprintf(outFile, \"%d\\n\", value);\n" + 
        "    fclose(outFile);\n" +
        "} \n\n" +
        "void registerTime(float value){\n" + 
        "    outFile = fopen(\"results/results.csv\",\"a\");\n" +
        "    fprintf(outFile, \",%.2f\", value);\n" + 
        "    fclose(outFile);\n" +
        "}";
        }
}