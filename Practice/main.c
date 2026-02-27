// This is a file where I will practice writing out the algorithms that I've learnt
#include <stdio.h>
#include "./bubbleSort.h"
#define SIZE 5


int main(){
    int array[SIZE] = {5, 3, 4, 1, 2}; 
    
    printf("------Before------\n");
    for (int i = 0; i < SIZE; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    /* Bubble Sort Check */
    bubbleSort(array, SIZE);

    printf("------After------\n");
    for (int i = 0; i < SIZE; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

}
