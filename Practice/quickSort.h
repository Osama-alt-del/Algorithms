// This is a file to implement quickSort
int partition(int* array, int low, int high){
    int i, j, temp, pivot;
    pivot = array[low];
    i = low;
    j = high;
    // Do while is needed, look this up
    do{
            do{i++;}while(array[i] <= pivot);
            do{j--;}while(array[j] > pivot);
            if (i < j){ // This is necessary
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
            }
    }while(i < j);
    // If i<j, then j is pivot's position:
    temp = array[j];
    array[j] = array[low];
    array[low] = temp;
    return j;
}

void quickSort(int* array, int low, int high){
    if (low < high){ // If there are at least 2 values

        int j = partition(array, low, high);        
        partition(array, low, j);
        partition(array, j+1, high);
    }
}

