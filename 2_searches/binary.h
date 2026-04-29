// This is binary search which only works for sorted arrays (or data sets);

// So it's the same as searching using a dictionary (which is surprisingly fast sometimes). So we check halfway through the array, then we check if the current value is less or greater than the current value, if not, then we go  up or down half a segment and we check again, then we return the index

// This takes the left and right indicies and then returns the middle index
int findMiddle(int l, int r){
    return (r+l)/2;
}
// What is the condition for "not found?", if the count is
int binarySearch(int* array, int SIZE, int x) {
    int l = 0;
    int r = SIZE-1; // This works with indexes
    int k = findMiddle(l, r);

    // figure out the terminating condition (which should be l < r)
    while (array[k] != x && l <= r) {
        if (array[k] > x){
            r = k-1; /* Search the lower half */
        }
        if (array[k] < x){
            l = k+1; /* Search the upper half */
        }

        // Move to the next index
        k = findMiddle(l, r);
    }

    // If you have not met the terminating condition, and the while loop has ended, that means you have the index
    if (l <= r) {
        return k;
    }
    
    // Return -1 because you have met the terminating condition, meaning that you have not found the value
    return -1;
}


