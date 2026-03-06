// TO DO: MAKE TIMER
// This is a file where I will practice writing out the algorithms that I've learnt
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "./bubble2.h"
#include "./quick2.h"

#define SIZE 50 
// --------------------TO DO------------------------------------------------ //
// I want to make a timer function which takes an algorithm and returns it's total time taken, but different functions have a different number
// of parameters, so what I have to do is use something called a "vardiac" template which allows me to have different numbers of parameters.
// Then I can use the time library to time the function and turn that into something readable, and output it

int main(){
    int array[SIZE];
    clock_t t;
    
    /* Set Array */
    srand(time(NULL));
    for (int i = 0; i < SIZE; i++){
        array[i] = rand () % 10; // Set all values to be in between 0 and 9
    }
    
    printf("------Before------\n");
    for (int i = 0; i < SIZE; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    


    t = clock();
    /* Bubble Sort Check */
    //  bubbleSort(array, SIZE);

    /* Quick Sort Check */
    quickSort(array, 0, SIZE);
    
    t = clock() - t;

    printf("------After------\n");
    for (int i = 0; i < SIZE; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    // Prints the elapsed time in ticks?
    printf("%ld elapsed\n", t);
}
