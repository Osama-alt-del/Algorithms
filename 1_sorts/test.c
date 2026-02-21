#include <stdio.h>
#include "./1_bubbleSort.h"
#define SIZE 4 
void bubbleSort(int*, int);

int main(){

	/* Bubble Sort Checks */
	// Can't use variable to define array length?
	// const size = 3;
	int array[SIZE] = {4, 3, 2, 1};
	betterBubbleSort(array, SIZE);

	// Check the sorted array
	for (int i = 0; i < SIZE; i++){
		printf("%d\n", array[i]);
	}

	return 0;
}

