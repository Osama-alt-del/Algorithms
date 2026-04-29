#include <time.h>
#ifndef HANDY_H
#define HANDY_H
void printArray(int* array, int size){
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void setArray(int *array, int size) {
    srand(time(NULL)); // make sure we have the same seed whenever we call this function
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 9 + 1;
    }
}

void setSortedArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = i;
    }
}
#endif
