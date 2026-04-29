// This is linear search and it's the linearGuard search

int linearSearch(int* array, int SIZE, int x) {
    int i;
    // This stops incrementing immediately if 
    /*
    for (i = 0; i < SIZE; i++) {
        if (array[i] != x) {
            continue;
        }
        break;
    }
    */

    for (i = 0; i < SIZE && array[i] != x; i++){}

    // If it has not been incremented all the way without finding something
    if (i < SIZE) return i; 
    return -1;
}

int linearGuard(int* array, int SIZE, int x) {
    int k = 0, t; /* our index, and temporary variable to swap */

    // swap the last value with the value we are looking for
    t = array[SIZE-1];
    array[SIZE-1] = x;

    while (array[k] != x) {
        k++;
    }
    // Check if k is less than the final index
    if (k < SIZE-1) {
        return k;
    }
    // Check if x is equal to the temp value (previos final array val)
    if (x == t) {
        return k; /* return k because it will always only go to the end if not before */
    }
    return -1; /* Otherwise we haven't found */
}




