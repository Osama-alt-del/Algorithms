// Function to swap array values:
#include "handy.h"


void bubbleSort(int* array, int size){
    int flag;
    int k = 0;
    do{
        flag = 0;
        for (int i = 0; i < size-1-k; i ++) {
            if (array[i] > array[i+1]) {
                swap(&array[i], &array[i+1]); // Swap array values, if the current is greater than next
                flag = 1;
            }
        }
        k++; // check for less as the algorithm goes on
    } while (flag);
}
