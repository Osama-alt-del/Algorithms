// This is linear search

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




