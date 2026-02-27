/* This is a bubbleSort header file
    Complexity:
        Time: O(n^2) worst case, O(n) best case (of data arrangement)
        Space: O(1) --> memory usage does not grow with the size of the data
*/
void bubbleSort(int* array, int size){
    int temp;
    int flag = 1;
    int k = 0;
    // Run until the array is sorted (flag stays 0)
    while(flag){
        flag = 0;
        // Run the bubble through the array
        for(int i = 0; i < size-1-k; i++){
            // If the current greater than next, swap and set flag
            if (array[i] > array[i+1]){
                flag = 1;
                temp = array[i+1];
                array[i+1] = array[i];
                array[i] = temp;
            }
        }
        // The end becomes more sorted so no need to check
        k++;
    }
}
