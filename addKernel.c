#include <stdio.h>
#include <stdlib.h>

void vecAdd(float* A_h, float* B_h, float* C_h, int n){
    for (int i = 0; i < n; i++){
        // add each element in B host to each element in A host
        C_h[i] = A_h[i] + B_h[i];
    }
}

// helper to populate array
void populateArr(float* arr, int n){
    for (int i = 0; i < n; i++){
        arr[i] = i;
    }
}

int main() {
    // must allocate memory for each of A, B, and C
    float* A_h = malloc(5 * sizeof(float*)); // malloc 1
    float* B_h = malloc(5 * sizeof(float*)); // malloc 2
    float* C_h = malloc(5 * sizeof(float*)); // malloc 3
    populateArr(A_h, 5);
    populateArr(B_h, 5);

    vecAdd(A_h, B_h, C_h, 5);

    for (int i = 0; i < 5; i++){
        printf("%f\n", C_h[i]);
    }

    return 0;
}

 


