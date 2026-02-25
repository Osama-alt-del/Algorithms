#include <stdio.h>
#include "./1_bubbleSort.h"
#include "./2_quickSort.h"
#define SIZE 10

int main(){

	// Can't use variable to define array length?
	// const size = 3;
	// int array[SIZE] = {4, 3, 2, 1};
        int array[SIZE] = {3, 2, 6, 4, 0, -1, -2, -5, -6, 100};
        /*--- Print the Array Before ---*/
        printf("//-----Array-----//\n");
	for (int i = 0; i < SIZE; i++){
		printf("%d ", array[i]);
	}
        printf("\n");


	/*----- Bubble Sort Test -----*/

	//betterBubbleSort(array, SIZE);
	
	/*----- Quick Sort Test -----*/
        // partition(array, 0, SIZE);
	quickSort(array, 0, SIZE);
        
	/*--- Check the sorted array ---*/
        printf("//-----Array-----//\n");
	for (int i = 0; i < SIZE; i++){
		printf("%d ", array[i]);
	}
        printf("\n");

	return 0;
}

