#include <time.h>
// This is a file to implement quickSort
int partition(int* array, int low, int high){
    int i, j, temp, pivot;
    pivot = array[low];
    i = low;
    j = high-1;
    while(i < j){// It's fine for this to be a while loop
            // If these aren't do while, then there's a seg fault
            // This problem can be fixed, by simply setting j to be high -1
            while (array[i] <= pivot){
                i++;
            }
            while (array[j] > pivot){
                j--;
            }
            // do{i++;}while(array[i] <= pivot);
            // do{j--;}while(array[j] > pivot);
            if (i < j){ // This is necessary
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
            }
    }
    // If i<j, then j is pivot's position:
    temp = array[j];
    array[j] = array[low];
    array[low] = temp;
    return j;
}

void quickSort(int* array, int low, int high){
    if (low < high){ // If there are at least 2 values
        int j = partition(array, low, high);        
        // YOU WERE RUNNING PARTITION HERE, NOT QUICK SORT
        // QUICKSORT GOES UNDER HERE
        quickSort(array, low, j);
        quickSort(array, j+1, high);
    }
}

