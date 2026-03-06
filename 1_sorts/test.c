#include <stdio.h>
#include "./1_bubbleSort.h"
#include "./2_quickSort.h"
#include "./3_mergeSort.h"

#include <time.h>
#include <stdlib.h>
#define SIZE 50

int main(){

	// Can't use variable to define array length?
	// const size = 3;
	// int array[SIZE] = {4, 3, 2, 1};
        int array[SIZE];

        /* Set Array */
        srand(time(NULL));
        for (int i = 0; i < SIZE; i++){
            array[i] = rand () % 10; // Set all values to be in between 0 and 9
        }

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
        
	/*----- Merge Sort Test -----*/
        // mergeSort(array, 0, SIZE);
    
	/*--- Check the sorted array ---*/
        printf("//-----Array-----//\n");
	for (int i = 0; i < SIZE; i++){
		printf("%d ", array[i]);
	}
        printf("\n");

	return 0;
}

