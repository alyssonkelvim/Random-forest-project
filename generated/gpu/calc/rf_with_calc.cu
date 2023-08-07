#include <sys/time.h>
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
#define N_ELEM 150


#include <cuda_runtime.h>
#include <stdio.h>


void initialData(float *ip, int size){

  for (int i = 0; i < size; i++){
      ip[i] = (float)( rand() & 15 );
  }
  return;
}
FILE *inFile;
FILE *outFile;

void readInFile(float **ip) {
    FILE *file = fopen("assets/datasets/Iris.csv","r");
    if (file == NULL) {
        printf("[CUDA]: Failed to open the file.\n");
        exit(1);
    }

    char line[1000];
    
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
void writeOutFile(int value){
    outFile = fopen("out_rf.csv","a");
    fprintf(outFile, "%d\n", value);
    fclose(outFile);
} 

void registerTime(float value){
    outFile = fopen("results/results.csv","a");
    fprintf(outFile, ",%.2f", value);
    fclose(outFile);
}__global__ void RF_kernel(const int offset0, const int offset1, const int offset2, const int n, const int offset0, const int offset1, const int offset2, float *vR)
{	int i = blockIdx.x * blockDim.x + threadIdx.x;
	Class[0] = 0;
	Class[1] = 0;
	Class[2] = 0;
	if (i < N) {

		__shared__ int classesTree0[] = {0,0,0,0,0,0,0,0,1,1,1,2,2,2,2,2};

		int rt0_0_0 = (F3[i] <= (0.8 + offset0));
		int t0_0_0 = rt0_0_0 * (2 + F3[i] <= (0.8 + offset0));
		t0_0_0 += (1 - rt0_0_0) * ( F3[i] <= (0.8 + offset0));


		int rt0_0_1 = (F3[i] <= (0.8 + offset0));
		int t0_0_1 = rt0_0_1 * (2 + F3[i] <= (0.8 + offset0));
		t0_0_1 += (1 - rt0_0_1) * ( F3[i] <= (0.8 + offset0));


		int rt0_0_2 = (F2[i] <= (4.75 + offset0));
		int t0_0_2 = rt0_0_2 * (2 + F1[i] <= (2.6 + offset0));
		t0_0_2 += (1 - rt0_0_2) * ( F2[i] <= (4.75 + offset0));


		int rt0_0_3 = (F2[i] <= (4.95 + offset0));
		int t0_0_3 = rt0_0_3 * (2 + F2[i] <= (4.95 + offset0));
		t0_0_3 += (1 - rt0_0_3) * ( F2[i] <= (4.95 + offset0));


		int rt0_1_0 = (F3[i] <= (0.8 + offset0));
		int t0_1_0 = rt0_1_0 * (8 + t0_0_1);
		t0_1_0 += (1 - rt0_1_0) * t0_0_0;


		int rt0_1_1 = (F2[i] <= (4.95 + offset0));
		int t0_1_1 = rt0_1_1 * (8 + t0_0_3);
		t0_1_1 += (1 - rt0_1_1) * t0_0_2;


		int rt0_2_0 = (F3[i] <= (0.8 + offset0));
		int t0_2_0 = rt0_2_0 * (12 + t0_1_1);
		t0_2_0 += (1 - rt0_2_0) * t0_1_0;


		Class[classesTree0[t0_2_0]]++;


		__shared__ int classesTree1[] = {0,0,0,0,1,2,2,2};

		int rt1_0_0 = (F3[i] <= (0.8 + offset1));
		int t1_0_0 = rt1_0_0 * (2 + F3[i] <= (0.8 + offset1));
		t1_0_0 += (1 - rt1_0_0) * ( F3[i] <= (0.8 + offset1));


		int rt1_0_1 = (F2[i] <= (4.95 + offset1));
		int t1_0_1 = rt1_0_1 * (2 + F2[i] <= (4.95 + offset1));
		t1_0_1 += (1 - rt1_0_1) * ( F3[i] <= (1.6 + offset1));


		int rt1_1_0 = (F3[i] <= (0.8 + offset1));
		int t1_1_0 = rt1_1_0 * (8 + t1_0_1);
		t1_1_0 += (1 - rt1_1_0) * t1_0_0;


		Class[classesTree1[t1_1_0]]++;


		__shared__ int classesTree2[] = {1,1,2,1,0,0,1,2,2,2,2,2,2,2,2,2};

		int rt2_0_0 = (F0[i] <= (6.05 + offset2));
		int t2_0_0 = rt2_0_0 * (2 + F0[i] <= (6.15 + offset2));
		t2_0_0 += (1 - rt2_0_0) * ( F0[i] <= (6.05 + offset2));


		int rt2_0_1 = (F2[i] <= (3.05 + offset2));
		int t2_0_1 = rt2_0_1 * (2 + F2[i] <= (5.35 + offset2));
		t2_0_1 += (1 - rt2_0_1) * ( F2[i] <= (3.05 + offset2));


		int rt2_0_2 = (F3[i] <= (1.7 + offset2));
		int t2_0_2 = rt2_0_2 * (2 + F3[i] <= (1.7 + offset2));
		t2_0_2 += (1 - rt2_0_2) * ( F3[i] <= (1.7 + offset2));


		int rt2_0_3 = (F3[i] <= (1.7 + offset2));
		int t2_0_3 = rt2_0_3 * (2 + F3[i] <= (1.7 + offset2));
		t2_0_3 += (1 - rt2_0_3) * ( F3[i] <= (1.7 + offset2));


		int rt2_1_0 = (F1[i] <= (2.85 + offset2));
		int t2_1_0 = rt2_1_0 * (8 + t2_0_1);
		t2_1_0 += (1 - rt2_1_0) * t2_0_0;


		int rt2_1_1 = (F3[i] <= (1.7 + offset2));
		int t2_1_1 = rt2_1_1 * (8 + t2_0_3);
		t2_1_1 += (1 - rt2_1_1) * t2_0_2;


		int rt2_2_0 = (F3[i] <= (1.7 + offset2));
		int t2_2_0 = rt2_2_0 * (12 + t2_1_1);
		t2_2_0 += (1 - rt2_2_0) * t2_1_0;


		Class[classesTree2[t2_2_0]]++;

		int p0 = (Class[0] > Class[1])?0:1;
		int Q0 = (Class[0] > Class[1])?Class[0]:Class[1];
		int p1 = (Class[2] > Q0)?2:p0;
		int Q1 = (Class[2] > Q0)?Class[2]:Q0;
		vR[i] = p1;
	}
}int main(int argc, char ** argv) {
     
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

    float  * h_0,  * h_1,  * h_2,  * h_3,  * h_4;
    int * h_P, * hostRef;
    	h_0 = (float * ) malloc(nBytes);
	h_1 = (float * ) malloc(nBytes);
	h_2 = (float * ) malloc(nBytes);
	h_3 = (float * ) malloc(nBytes);
	h_4 = (float * ) malloc(nBytes);
    hostRef = (int * ) malloc(nBytes);
    h_P = (int * ) malloc(nBytes);

    printf("[CUDA]: Start Reading Dataset\n");
	float* h[5] = { h_0, h_1, h_2, h_3, h_4};
	readInFile(h);
	printf("[CUDA]: Finished Reading Dataset\n");


    memset(hostRef, 0, nBytes);
    memset(h_P, 0, nBytes);

    // malloc device global memory
    float * d_0, * d_1, * d_2, * d_3, * d_4;
    int * d_P;
        CHECK(cudaMalloc((float ** ) & d_0, nBytes));
    CHECK(cudaMalloc((float ** ) & d_1, nBytes));
    CHECK(cudaMalloc((float ** ) & d_2, nBytes));
    CHECK(cudaMalloc((float ** ) & d_3, nBytes));
    CHECK(cudaMalloc((float ** ) & d_4, nBytes));
    CHECK(cudaMalloc((int ** ) & d_P, nBytes));


    // transfer data from host to device
        CHECK(cudaMemcpy(d_0, h_0, nBytes, cudaMemcpyHostToDevice));
    CHECK(cudaMemcpy(d_1, h_1, nBytes, cudaMemcpyHostToDevice));
    CHECK(cudaMemcpy(d_2, h_2, nBytes, cudaMemcpyHostToDevice));
    CHECK(cudaMemcpy(d_3, h_3, nBytes, cudaMemcpyHostToDevice));
    CHECK(cudaMemcpy(d_4, h_4, nBytes, cudaMemcpyHostToDevice));
    // invoke kernel at host side
    int iLen = 512;
    dim3 block(iLen);
    dim3 grid((nElem + block.x - 1) / block.x);

    cudaEvent_t start, stop;
    CHECK(cudaEventCreate( & start));
    CHECK(cudaEventCreate( & stop));
    // record start event
    CHECK(cudaEventRecord(start, 0));
    RF_kernel << < grid, block >>> (d_0, d_1, d_2, d_3, d_4, nElem, 0,0,0, d_P);
    cudaDeviceSynchronize();
    CHECK(cudaEventRecord(stop, 0));
    CHECK(cudaEventSynchronize(stop));
    // calculate elapsed time
    CHECK(cudaEventElapsedTime( & elapsed_time, start, stop));
    printf("[CUDA]: RF without IF - execution time = %.6fms\n", elapsed_time);

    registerTime(elapsed_time);
    CHECK(cudaMemcpy(h_P, d_P, nBytes, cudaMemcpyDeviceToHost));
    CHECK(cudaEventCreate( & start));
    CHECK(cudaEventCreate( & stop));
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
    cudaFree(d_P);
        free(h_0);
    free(h_1);
    free(h_2);
    free(h_3);
    free(h_4);
    free(hostRef);

    return (0);
 }