#include "quickSort.h"
#include "bubbleSort.h"
#include "handy.h" // handy has stdlib.h and stdio.h included

#include <time.h>

#define SIZE 5000

void printArray(int*, int);
void setArray(int*, int);

float testBubbleSort();
float testQuickSort();

int main() {
    float bubble_t, quick_t; 
    // Bubble Sort test and time
    bubble_t = testBubbleSort();

    // Quick Sort test and tiem
    quick_t = testQuickSort();

    // Compare the speeds:

    printf("For n of %d, quickSort is %d times faster than bubbleSort\n", SIZE, (int)(bubble_t/quick_t));


    return 0;
}

float testBubbleSort() {
    printf("//-------BUBBLE SORT--------//\n");
    // Make array (allocate memory for this array of a certain SIZE);
    int array[SIZE];

    // Set random array
    setArray(array, SIZE); // this should have the same seed

    // Print array out
    if (SIZE <= 100){
        printf("-------BEFORE-------\n");
        printArray(array, SIZE);
    }

    // Calculate how much time is taken in processing:
    clock_t start_t = clock(); // return the current ticks that the program has taken.

    // Bubble sort
    bubbleSort(array, SIZE);

    // Tell me how much time it took
    float total_t = (float) (clock() - start_t)/CLOCKS_PER_SEC;
     
    // Print out the array again
    if (SIZE <=100){
        printf("-------AFTER-------\n");
        printArray(array, SIZE);
    }
    
    printf("Total time in seconds: %f \n", total_t);
    return total_t; // return the time as a float so we can compare in main
}

float testQuickSort() {
    printf("//-------QUICK SORT--------//\n");
    // Make array (allocate memory for this array of a certain SIZE);
    int array[SIZE];

    // Set random array
    setArray(array, SIZE); // this should have the same seed

    // Print array out
    if (SIZE <= 100) {
        printf("-------BEFORE-------\n");
        printArray(array, SIZE);
    }

    // Calculate how much time is taken in processing:
    clock_t start_t = clock(); // return the current ticks that the program has taken.

    // Bubble sort
    quickSort(array, 0, SIZE);

    // Tell me how much time it took
    float total_t = (float) (clock() - start_t)/CLOCKS_PER_SEC;
     
    // Print out the array again
    if (SIZE <= 100) {
        printf("-------AFTER-------\n");
        printArray(array, SIZE);
    }
    
    printf("Total time in seconds: %f \n", total_t);
    return total_t; // return the time as a float so we can compare in main

}
