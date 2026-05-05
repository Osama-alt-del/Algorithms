// We will split this into 3 different functions

void merge(int* array, int l, int m, int r){
    // we need indexes for left array, right array, and the real array
    int i, j, k;

    // we need to figure out the size of the subarrays:
    int n1 = m-l+1;
    int n2 = r-m;

    // Then declare subarrays:
    int temp1[n1], temp2[n2];

    // populate the subarrays with values (copy the values of the array into the subarrays
    for (i = 0; i < n1; i++){
        temp1[i] = array[l + i];
    }
    for (j = 0; j < n2; j++){
        temp2[j] = array[m + 1 + j]; // we need the +1 to skip the middle value.
    }

    // reset the indexes and start to merge:
    i = 0; j = 0;
    k = l; // because this is the index we will use for the real array, we must use l.

    while (i < n1 && j < n2){
        if (temp1[i] <= temp2[j]){
            array[k] = temp1[i];
            i++;
        } else {
            array[k] = temp2[j];
            j++;
        }
        k++; // increment k regardless of what value is chosen
    }
    
    // Fill in the rest of the values
    while (i < n1) {
        array[k] = temp1[i];
        i++;
        k++;
    }

    while (j < n2) {
        array[k] = temp2[j];
        j++;
        k++;
    }
}


// Recursive Function
void mergeSortedArrays(int * array, int l, int r){
    if (l < r) { // if problem still large or too big
        // Figure out the middle
        int m = (l+r)/2;

        // Keep on splitting (keep on recursing);
        mergeSortedArrays(array, l, m);
        mergeSortedArrays(array, m+1, r);

        // In the end, I want you to merge them (run merge function)
        merge(array, l, m, r); // we need m to know where the subarrays split
    }
}


void mergeSort(int* array, int size){
    mergeSortedArrays(array, 0, size-1); // because this works with the final index and not the size for the final parameter.
}
