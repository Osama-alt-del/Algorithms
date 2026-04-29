// This is a file to test search algorithms

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#include "handy.h"
#include "linear.h"
#include "binary.h"

#define SIZE 150 

void testBinary();
void compareLinearGuard();
float testLinear();
float testLinear();


int main() {
    compareLinearGuard();
}

void testBinary(){
    // Just using this to test nicely !! Must be sorted !!
    int array[SIZE] = {0, 12, 22, 30, 34};
   
    // Before
    printArray(array, SIZE);

    // Start timing
      
    clock_t start_t, end_t;
    float total_t;
    start_t = clock();

    // Run the code and print out the index of the value we are searching for
    printf("The index is: %d\n", binarySearch(array, SIZE, 34));

    end_t = clock(); 
    
    // stop timing and print out the time taken:
    total_t = (float) (end_t - start_t)/CLOCKS_PER_SEC;
    
    printf("Total time taken in seconds: %f\n", total_t);
}

float testLinear(){
    clock_t start_t, end_t; /* start ticks variable */
    start_t = clock();
    
    int array[SIZE];

    // setArray(array, SIZE);

    setSortedArray(array, SIZE);

    printArray(array, SIZE);

    /* Code to test: */

    /* Linear Search code: */
    int index;
    index = linearSearch(array, SIZE, 100);
    printf("%d\n", index); 

    end_t = clock();
    
    float total_t = (float) (end_t - start_t)/CLOCKS_PER_SEC;
    return total_t;
}

float testLinearGuard() {
    clock_t start_t, end_t; /* start ticks variable */
    start_t = clock();
    
    int array[SIZE];

    // setArray(array, SIZE);

    setSortedArray(array, SIZE);

    printArray(array, SIZE);

    /* Code to test: */

    /* Linear Search code: */
    int index;
    index = linearGuard(array, SIZE, 100);
    printf("%d\n", index); 

    end_t = clock();
    
    float total_t = (float) (end_t - start_t)/CLOCKS_PER_SEC;
    return total_t;
}

void compareLinearGuard() {
    float linear_t = testLinear();
    float linearg_t = testLinearGuard();
    printf("Time taken for linear: %f seconds\n", linear_t);
    printf("Time taken for linear guard: %f seconds\n", linearg_t);
}
