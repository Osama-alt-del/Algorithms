// This is a C file where I implement bubble sort to sort an array

/*
So firstly, what is bubble sort?

Ascending order
Bubble sort is basically where A bubble goes through the entire array multiple times, checking if the next value is greater than the current
value. If the current value is greater, then the values are switched. The bubble then moves up the array until the end. 

*/
#include <stdio.h>
#define SIZE 5
void bubbleSort(int*, int);

int main(){
	// Can't use variable to define array length?
	// const size = 3;
	int array[SIZE] = {3, 1, 2, 5, 4};
	bubbleSort(array, SIZE);

	// Check the sorted array
	for (int i = 0; i < SIZE; i++){
		printf("%d\n", array[i]);
	}

	return 0;
}

// Final check could be one final loop with a boolean
void bubbleSort(int* array, int size){
	int temp;
	int count = 0;
	// Check the condition required for the while loop
	while (count < SIZE){
		// size -1 used to ensure i+1 works
		for (int i = 0; i < SIZE-1; i++){
			if (array[i] > array[i+1]){
				temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;
			}
		}
	count++;
	}
}
