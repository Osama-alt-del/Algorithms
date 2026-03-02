#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "./quickSort.h"

#define SIZE 5 


int main(){
    int array[SIZE];
    
    /* Set Array */
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++){
        array[i] = rand () % 10; 
    }
    
    printf("------Before------\n");
    for (int i = 0; i < SIZE; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    /* Quick Sort Check */
    quickSort(array, 0, SIZE); 

    printf("------After------\n");
    for (int i = 0; i < SIZE; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
