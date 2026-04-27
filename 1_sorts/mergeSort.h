// This is mergeSort
#include "handy.h" /* Includes stdio and stdlib.h */

// So we will split this into teo functions mergeSort() for Divide, and merge() for conquer and combine.

// not working for some reason
// for now I'll just write it and see
void merge(int* array, int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    
    // Create temporary arrs:
    int temp1[n1], temp2[n2];

    // Copy data to the arrays: (can't we just recycle the same variable here?)
    for (i = 0; i < n1; i++) {temp1[i] = array[l+i];} /* start from the left to the end */
    for (j = 0; j < n1; j++) {temp2[j] = array[m+1+j];} /* start from the middle, to the end */

    // Merge the temporary arrays back into array (?)
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (temp1[i] <= temp2[j]) {
            array[k] = temp1[i];
            i++;
        } else {
            array[k] = temp2[i];
            j++;
        }
        k++;
    }

    // Copy remaining elements of temp1[] if there are any (?)
    // I guess i is already where we want it, so we don't nead to reset it
    while (i < n1) {
        array[k] = temp1[i];
        i++;
        k++;
    }

    // same for rightArr[]
    while (j < n2) {
        array[k] = temp2[j];
        j++;
        k++;
    }
    
}


void mergeSort(int* array, int l, int r){
    // terminating condition
    if (l < r) {
        // calculate the midpoint (so we can use the merge() function)
        int m = l + (r - l) / 2;

        // Sort first and second halves: (how is this sorting it?)
        mergeSort(array, l, m);
        mergeSort(array, m+1, r);

        // I thought this was the sort function though?
        merge(array, l, m, r);
    }
}

