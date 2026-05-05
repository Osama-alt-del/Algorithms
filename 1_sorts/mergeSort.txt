// Recursive Function to break down the array:

// the merging function:
void merge(int* array, int l, int m, int r){
    int i, j, k; // indexes for temporary arrays, and the actual array
    
    // find the sizes of temporary arrays (number of values between l, and m, and m and r)
    int n1 = m-l+1;
    int n2 = r-m;

    // declare the temporary arrays
    int temp1[n1], temp2[n2];

    // populate the temporary arrays
    for (i = 0; i < n1; i++){
        temp1[i] = array[l+i];
    }
    for (j = 0; j < n2; j++){
        temp2[j] = array[m + j + 1]; // we need plus 1 to go over the value in mid, which is part of the first subarray
    }

    // no that we have the arrays (WHICH WE ASSUME ARE ALREADY SORTED), we will merge them
    // reset the indexes
    i = 0;
    j = 0;
    k = l; // k is left because we will use for the array, and there might be values before left

    while (i < n1 && j < n2) {
        if (temp1[i] <= temp2[j]){
            array[k] = temp1[i]; // if we are doing smallest to largest
            i++;
        }
        else if (temp2[j] < temp1[i]) {  // make sure you use else here
            array[k] = temp2[j];
            j++;
        }
        k++; // increment the value that we are going to change
    }

    // fill in the rest of the values
    while (i < n1) { 
        array[k] = temp1[i];
        i++; k++;
    }
    while (j < n2) { 
        array[k] = temp2[j];
        j++; k++;
    }

}

void mergeSortedArrays(int*array, int l, int r){
    if (l < r){ /* if the problem is still to complex, break it down, if small, then do nothing (to go back up 1 level) */
        // find the middle (in a way that avoids overflow);
        int m = l + (r-l)/2;

        // break the problem down into lower half and upper half:
        mergeSortedArrays(array, l, m);
        mergeSortedArrays(array, m+1, r);

        // merge and sort them (will start with single blocks)
        merge(array, l, m, r); // we need middle to know where the second array starts.
    }

    // we could add a "else return" here, but it's not required because this is a void function
}

// one more function to make it nice and easy to run the whole thing (so that we don't have to enter 0 as a parameter)
void mergeSort(int*array, int size){
    mergeSortedArrays(array, 0, size-1); // pretty sure this takes indexes and not the size itself
}
