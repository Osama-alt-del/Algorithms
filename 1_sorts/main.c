// I want to have a function that takes a function as an argument (of any parameter size) and then times it, and how long it takes.
// Being able to do this will also be good for our skills.

#include "quickSort.h"
#include "bubbleSort.h"
#include "mergeSort.h"
#include "handy.h" // handy has stdlib.h and stdio.h included

#include <time.h>

#define SIZE 100

void printArray(int*, int);
void setArray(int*, int);

float testBubbleSort();
float testQuickSort();
float testMergeSort();

int main() {
    float bubble_t, quick_t, merge_t; 

    // Bubble Sort test and time
    bubble_t = testBubbleSort();

    // Quick Sort test and time
    quick_t = testQuickSort();

    // Merge Sort test and time
    merge_t = testMergeSort();

    // Compare the speeds:
    // quick vs bubble
    printf("For n of %d, quickSort is %d times faster than bubbleSort\n", SIZE, (int)(bubble_t/quick_t));

    // merge vs quick:
    printf("For n of %d, mergeSort is %d times faster than quickSort\n", SIZE, (int)(quick_t/merge_t));

    return 0;
}

// I use these functions to test and output.
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
    if (SIZE <= 100){
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

    // QuickSort
    //quickSort(array, 0, SIZE);
    quickSort2(array, 0, SIZE-1); /* This sort takes the final index instead of total size for upper */

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

float testMergeSort() {
    printf("//-------MERGE SORT--------//\n");
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

    // Merge Sort
    mergeSort(array, SIZE); 

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
