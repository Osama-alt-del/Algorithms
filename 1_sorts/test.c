#include <stdio.h>
#include "./1_bubbleSort.h"
#include "./2_quickSort.h"
#define SIZE 6 

int main(){

	// Can't use variable to define array length?
	// const size = 3;
	// int array[SIZE] = {4, 3, 2, 1};
        int array[SIZE] = {3, 2, 6, 4, 0, -1};
            

	/* Bubble Sort Test */

	//betterBubbleSort(array, SIZE);
	
	/* Quick Sort Test */
	quickSort(array, 0, SIZE);
        // partition(array, 0, SIZE);
        
        printf("//-----Array-----//\n");
	// Check the sorted array
	for (int i = 0; i < SIZE; i++){
		printf("%d ", array[i]);
	}
        printf("\n");

	return 0;
}

