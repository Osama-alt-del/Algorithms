// This is my second attempt at implementing bubbleSort 

// So we need a bubble that goes through the array and a flag condition to check.
// We can make it faster by reducing the depth at which we check for the array by having an extra count var that we can increment

void bubbleSort(int* array, int size){
    int flag, temp, k;
    k = 0;

    flag = 1;
    while(flag){
        // Firstly set flag to be 0. After that, if the bubble goes through and everything is sorted, then it will not change
        flag = 0;
        // Why do I have to add ';' to the last statement if I don't say "int i" ??
        for(int i = 0; i < size-1-k; i++){
            if(array[i] > array[i+1]){
                flag = 1;
                temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
        // For each bubble, decrease the depth of the search by 1 value (because the highest value is definitely at the end)
        k++;
    }

}



