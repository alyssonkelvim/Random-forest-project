#include <stdio.h>
#include <sys/time.h>
#include <cuda_runtime.h>

#define FLAG_NODE_LEAF_MASK 0x80000000
#define COLUMN_MASK 0x7C000000
#define RIGHT_INDEX_MASK 0x03FFE000
#define LEFT_INDEX_MASK 0x00001FFF
#define CLASS_MASK 0x03FFE000
#define NEXT_TREE_INDEX_MASK 0x00001FFF

#define GET_FLAG_NODE_LEAF(x) ((x & FLAG_NODE_LEAF_MASK) >> 31)
#define GET_COLUMN(x) ((x & COLUMN_MASK) >> 26)
#define GET_RIGHT_INDEX(x)  ((x & RIGHT_INDEX_MASK) >> 13)
#define GET_LEFT_INDEX(x)  (x & LEFT_INDEX_MASK)
#define GET_CLASS(x)  ((x & CLASS_MASK) >> 13)
#define GET_NEXT_TREE_INDEX(x)  (x & NEXT_TREE_INDEX_MASK)
#define NUM_THREADS 4
#define N_ELEM 150
#define MAX_LINE_LENGTH 1000

#define CHECK(call)                                                            \
{                                                                              \
    const cudaError_t error = call;                                            \
    if (error != cudaSuccess)                                                  \
    {                                                                          \
        fprintf(stderr, "Error: %s:%d, ", __FILE__, __LINE__);                 \
        fprintf(stderr, "code: %d, reason: %s\n", error,                       \
                cudaGetErrorString(error));                                    \
    }                                                                          \
}
__device__ int counter = 0;


void readInFile(float **ip) {
    FILE *file = fopen("assets/datasets/Iris.csv","r");
    if (file == NULL) {
        printf("[CUDA]: Failed to open the file.\n");
        exit(1);
    }

    char line[MAX_LINE_LENGTH];
    
    int row = 0;
    fgets(line, sizeof(line), file);
    while (fgets(line, sizeof(line), file)) {
        char *token = strtok(line, ",");
        
        int column = 0;
        while (token != NULL) {
            ip[column][row] = atof(token);
            token = strtok(NULL, ",");
            column++;
        }

        row++;
        if(row > N_ELEM) break;
    }

    fclose(file);
}

void writeOutFile(int *h, int size)
{
    FILE *file = fopen("out_rf_table_gpu.csv", "w");
    if (file == NULL) {
        printf("[CUDA]: Failed to open the file.\n");
        return;
    }

    for (int i = 0; i < size; i++) {
        fprintf(file, "%d\n", h[i]);
    }

    fclose(file);
}

void registerTime(int value) {
    FILE *file = fopen("results/results.csv", "a"); // Abre o arquivo no modo de "acrescentar" (append)
    if (file == NULL) {
        printf("[CUDA]: Falha ao abrir o arquivo results.csv.\n");
        return;
    }

    fprintf(file, ",%d", value); // Escreve o valor no arquivo, separado por vírgula
    fclose(file);
}

__global__ void RF_with_table(const int* __restrict__ table, const float* __restrict__ thresholds,float *F0, float *F1, float *F2, float *F3, float *F4, float *F5, int *P, const int N){
    int i = blockIdx.x * blockDim.x + threadIdx.x;
    float* h[6] = { F0, F1, F2, F3, F4, F5};




    if(i < N) {
        int Class[3];
        Class[0] = 0;
        Class[1] = 0;
        Class[2] = 0;
        int index = 0;

        while(index < 26){
            //Flag:0 -> Nó Interno, Flag:1 -> Folha
            if(!GET_FLAG_NODE_LEAF(table[index])){
                if(h[GET_COLUMN(table[index])][i] <= thresholds[index]){
                    index = GET_LEFT_INDEX(table[index]);
                    atomicAdd(&counter, 1);
                } else {
                    index = GET_RIGHT_INDEX(table[index]);
                    atomicAdd(&counter, 1);
                }
            } else {
                Class[GET_CLASS(table[index])]++; 
                index = GET_NEXT_TREE_INDEX(table[index]);
            }
        }

		int p0 = (Class[0] > Class[1])?0:1;
		int Q0 = (Class[0] > Class[1])?Class[0]:Class[1];
		int p1 = (Class[2] > Q0)?2:p0;
		int Q1 = (Class[2] > Q0)?Class[2]:Q0;
		P[i] = p1;
    }
}

int main(int argc, char ** argv) {
     
    float elapsed_time;
    // set up device
    int dev = 0;
    cudaDeviceProp deviceProp;
    CHECK(cudaGetDeviceProperties(&deviceProp, dev));
    printf("[CUDA]: Using Device %d: %s\n", dev, deviceProp.name);
    CHECK(cudaSetDevice(dev));

    // set up data size of vectors
    int nElem = 150;
    printf("[CUDA]: Vector Size %d\n", nElem);

    // malloc host memory
    size_t nBytes = nElem * sizeof(float);
    size_t nTableBytes = 26 * sizeof(int);    int tableData[] = 
	{ 201342977, -2147483633, 134266883, 201367556, -2147475441, -2147467249, 98311, 201416712, 67190793, -2147475441, -2147467249, -2147467249, 201441293, -2147475441, -2147467249,
	155664, 67256337, -2147475430, -2147483622, 201531412, 134414357, 67297302, -2147475430, -2147483622, -2147467238, -2147467238 };


    float thresholdsData[] = 
	{ 0.8, 0.0, 4.75, 1.65, 0.0, 0.0, 6.6, 1.85, 2.65, 0.0, 0.0, 0.0, 1.75, 0.0, 0.0, 
	5.55, 2.15, 0.0, 0.0, 1.75, 5.3, 3.55, 0.0, 0.0, 0.0, 0.0 };



    float  * h_0,  * h_1,  * h_2,  * h_3,  * h_4,  * h_5;
    int * h_P, * hostRef;
	h_0 = (float * ) malloc(nBytes);
	h_1 = (float * ) malloc(nBytes);
	h_2 = (float * ) malloc(nBytes);
	h_3 = (float * ) malloc(nBytes);
	h_4 = (float * ) malloc(nBytes);
	h_5 = (float * ) malloc(nBytes);
    hostRef = (int * ) malloc(nBytes);
    h_P = (int * ) malloc(nBytes);

	printf("[CUDA]: Start Reading Dataset\n");
	float* h[6] = { h_0, h_1, h_2, h_3, h_4, h_5};
	readInFile(h);
	printf("[CUDA]: Finished Reading Dataset\n");


    memset(hostRef, 0, nBytes);
    memset(h_P, 0, nBytes);

    // malloc device global memory
    float * d_0, * d_1, * d_2, * d_3, * d_4, * d_5,  * thresholds;
    int * d_P, * table;
    CHECK(cudaMalloc((float ** ) & d_0, nBytes));
    CHECK(cudaMalloc((float ** ) & d_1, nBytes));
    CHECK(cudaMalloc((float ** ) & d_2, nBytes));
    CHECK(cudaMalloc((float ** ) & d_3, nBytes));
    CHECK(cudaMalloc((float ** ) & d_4, nBytes));
    CHECK(cudaMalloc((float ** ) & d_5, nBytes));
    CHECK(cudaMalloc((int ** ) & d_P, nBytes));

    CHECK(cudaMalloc((float ** ) & table, nTableBytes));
    CHECK(cudaMalloc((float ** ) & thresholds, nTableBytes));
    // transfer data from host to device
    CHECK(cudaMemcpy(table, tableData, nTableBytes, cudaMemcpyHostToDevice));
    CHECK(cudaMemcpy(thresholds, thresholdsData, nTableBytes, cudaMemcpyHostToDevice));    CHECK(cudaMemcpy(d_0, h_0, nBytes, cudaMemcpyHostToDevice));
    CHECK(cudaMemcpy(d_1, h_1, nBytes, cudaMemcpyHostToDevice));
    CHECK(cudaMemcpy(d_2, h_2, nBytes, cudaMemcpyHostToDevice));
    CHECK(cudaMemcpy(d_3, h_3, nBytes, cudaMemcpyHostToDevice));
    CHECK(cudaMemcpy(d_4, h_4, nBytes, cudaMemcpyHostToDevice));
    CHECK(cudaMemcpy(d_5, h_5, nBytes, cudaMemcpyHostToDevice));
    // invoke kernel at host side
    int iLen = 512;
    dim3 block(iLen);
    dim3 grid((nElem + block.x - 1) / block.x);

    cudaEvent_t start, stop;
    CHECK(cudaEventCreate( & start));
    CHECK(cudaEventCreate( & stop));
    // record start event
    CHECK(cudaEventRecord(start, 0));
    RF_with_table << < grid, block >>> (table, thresholds, d_0, d_1, d_2, d_3, d_4, d_5, d_P, nElem);
    cudaDeviceSynchronize();
    CHECK(cudaEventRecord(stop, 0));
    CHECK(cudaEventSynchronize(stop));
    // calculate elapsed time
    CHECK(cudaEventElapsedTime( & elapsed_time, start, stop));
    printf("[CUDA]: RF with Table (shared memory) - execution time = %.6fms\n", elapsed_time);

    CHECK(cudaMemcpy(h_P, d_P, nBytes, cudaMemcpyDeviceToHost));
	 int counterValue;
    cudaMemcpyFromSymbol(&counterValue, counter, sizeof(int), 0, cudaMemcpyDeviceToHost);
    registerTime(counterValue);

    CHECK(cudaGetLastError());

    // copy kernel result back to host side
    CHECK(cudaMemcpy(h_P, d_P, nBytes, cudaMemcpyDeviceToHost));
    printf("\n ");

    // free host memory
    cudaFree(d_0);
    cudaFree(d_1);
    cudaFree(d_2);
    cudaFree(d_3);
    cudaFree(d_4);
    cudaFree(d_5);
    cudaFree(d_P);
    free(h_0);
    free(h_1);
    free(h_2);
    free(h_3);
    free(h_4);
    free(h_5);
    free(hostRef);

    return (0);
 }