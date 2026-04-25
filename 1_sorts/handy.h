#include <stdlib.h>
#include <stdio.h>
#ifndef SWAP_H
#define SWAP_H
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void printArray(int* array, int size){
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void setArray(int *array, int size) {
    srand(1); // make sure we have the same seed whenever we call this function
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 9 + 1;
    }
}
#endif
