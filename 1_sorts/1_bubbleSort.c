// This is a C file where I implement bubble sort to sort an array

/* Questions:
1. Q: Why can't we use a variable to declare the number of values in an array, even if that variable is set as constant?
   A: 	
2. Q: What is the complexity of Bubble sort in terms of space and time?
   A: 
*/

/*
So firstly, what is bubble sort?

Ascending order
Bubble sort is basically where A bubble goes through the entire array multiple times, checking if the next value is greater than the current
value. If the current value is greater, then the values are switched. The bubble then moves up the array until the end. 

Ex:
------> The bubble goes up the array
[] = bubble
Bubble 1:
1. [4] 3 1 2
2. 3 [4] 1 2
3. 3 1 [4] 2 
4. 3 1 2 [4]

Bubble 2:
5. [3] 1 2 4
6. 1 [3] 2 4 
7. 1 2 [3] 4

Here we only needed to do two bubbles, because only two numbers where out of place

and we end up with a sorted array

To check if the array is sorted, we use a flag (boolean), if our check condition is triggered, then the loop keeps going (usually set the
flag to 1 to keep the loop running)
*/

#include <stdio.h>
#define SIZE 4 
void bubbleSort(int*, int);

int main(){
	// Can't use variable to define array length?
	// const size = 3;
	int array[SIZE] = {4, 3, 2, 1};
	bubbleSort(array, SIZE);

	// Check the sorted array
	for (int i = 0; i < SIZE; i++){
		printf("%d\n", array[i]);
	}

	return 0;
}

// Final check could be one final loop with a boolean (correct)
void bubbleSort(int* array, int size){
	int temp;
	int flag = 1;
	// We use a flag to check the array has been sorted
	while (flag){
		flag = 0;
		// size -1 used to ensure i+1 works
		for (int i = 0; i < SIZE-1; i++){
			if (array[i] > array[i+1]){
				flag = 1;
				temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;
			}
		}
	}
}
