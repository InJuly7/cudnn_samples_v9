#include <assert.h>
#include <ctype.h>
#include <cuda_runtime.h>
#include <cudnn.h>
#include <float.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <chrono>
#include <iostream>

int main(int argc, char **argv)
{   
    int dimA[] = {1, 32, 480, 640};
    int padA[] = {1, 1};
    int convstrideA[] = {1, 1};
    int filterdimA[] = {32, 32, 3, 3};
    cudnnDataType_t dataType = CUDNN_DATA_FLOAT;
    cudnnTensorFormat_t filterFormat = CUDNN_TENSOR_NCHW;

    // 配置项解析

    // shape inference


    

}