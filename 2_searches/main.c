// This is a file to test search algorithms

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "handy.h"
#include "linear.h"

#define SIZE 15

int main() {
    clock_t start_t, end_t; /* start ticks variable */
    start_t = clock();
    
    int array[SIZE];

    setArray(array, SIZE);

    printArray(array, SIZE);

    /* Code to test: */

    /* Linear Search code: */
    int index;
    index = linearSearch(array, SIZE, 3);
    printf("%d\n", index); 

    /* Binary Search Code: */
    // binarySearch(array, SIZE, x);

    end_t = clock();
    
    float total_t = (float) (end_t - start_t)/CLOCKS_PER_SEC;
    printf("Total time taken: %f seconds\n", total_t); /* print out the time taken in seconds */
}








