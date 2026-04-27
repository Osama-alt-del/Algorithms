#include "handy.h"
// We will be writing quicksort in this file:

int partition(int *array, int lower, int upper) {
    // Using while and do while
    int pivot = array[lower];
    int i = lower-1;  // -1 because we will use do while
    int j = upper; 

    while (i < j) {
        // Might need to include equals somewhere?
        do {i++;} while(array[i] <= pivot); // Just always use this, because it can get stuck, if not while.
        do {j--;} while(array[j] > pivot);
        // while (array[i] < pivot) {i++;} // Keep incrementing if the current value is not greater or equal to the pivot
        // while (array[j] > pivot) {j--;} // Keep incrementing if the current value is not less than the pivot
        if (i < j){ // If we haven't yet found where the pivot should be
            swap(&array[i], &array[j]); // Swap the values.
        }
    }
    swap(&array[j], &array[lower]); // Move the pivot to where it should be
    return j; // return the position of where the pivot is now.
}


void quickSort(int* array, int lower, int upper) {
    if (lower < upper) {
        int j = partition(array, lower, upper);
        quickSort(array, lower, j);
        quickSort(array, j+1, upper);
    }
}

// This is the easiest way to write it in my opinion:
void quickSort2(int* array, int lower, int upper) {
    if (lower >= upper) {
        return;
    }
    int pivot = array[lower]; // The pivot is at the start of the array/segment
    // Using for loops and while loops
    int i, j;
    for (i = lower, j = upper; i<j;) {
        // keep incrementing i if current value is less than or equal to the pivot.
        while (array[i] <= pivot) {i++;};
        while (array[j] > pivot) {j--;};
        // swap if we haven't found the position that pivot is meant to be in
        if (i < j){
            swap(&array[j], &array[i]);
        }
    }
    // After i becomes greater than j, we have found the pivot's position, so we can go ahead and swap the pivot and j value.
    swap(&array[j], &array[lower]);

    // recursive call
    quickSort2(array, lower, j-1); // we shouldn't need to touch the value at [j] anymore because it should be sorted, so we work around it.
    quickSort2(array, j+1, upper);
}
