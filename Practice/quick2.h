// This is my second attempt at quickSort
// ?? How can I change the order (lowest to highest, highest to lowest)

// This function returns the value of the position that the first value of the array should be in, and returns that position, while also
// moving values that are larger to the end and values that are less to the start
int partition(int* array, int low, int high){
    int i, j, pivot, temp;
    pivot = array[low];
    i = low;
    j = high - 1; // High -1 if using while and not do while loop
    while(i < j){
        // Find greater than (As long as the array value is less than, keep adding)
        while(pivot >= array[i]){i++;}
        // Find less than (As long as the array value is greater than, keep adding)
        while(pivot < array[j]){j--;}
        if (i < j){ // i Might already be larger here, but it is not yet checked by the while loop
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
    // Swap with the correct position (does this work if I use pivot, or does it not work because it's not a pointer anymore?)
    temp = array[low];
    array[low] = array[j];
    array[j] = temp;
    // return position
    return j;
}

// This is the recursive, divide and conquer algorithm quicksort (only use parition once) 
void quickSort(int* array, int low, int high){
    if (low < high){
        int j = partition(array, low, high);
        quickSort(array, low, j);
        quickSort(array, j+1, high);
    }
}

