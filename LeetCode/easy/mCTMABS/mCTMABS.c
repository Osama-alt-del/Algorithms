/* This is the leetcode file for Minimum Changes To Make Alternating Binary String

Basically what I have to do is:

I have to make the minimum changes to make a binary string like: 1001010101 into an alternating one, so for example: 101010101010

only output the number of operations

so first I have to check if it is alternating or not

So I can't change the value of string literals (which are pointers tochars, because that would mean trying to access read only memory, which can't be modified. (char *) will point to any memory space and does not care it it's read only space or not. To make it modifiable, we have to make it into an array:

attempting to modify a string literal results in undefined behavior

char key[] = "abcd"

so that means there is a difference between the following:
char key[] = 
char* key = 

but we can pass a key[] as a char* key in a function
but we can't pass key* as a key[] parameter in a function
*/
#include <stdio.h>
#include <string.h> // Need this for strlen()

int minimumOperations(char* s){
    // Ok so we can't initialize like this. Let's just change the function parameter
    // I forgot adding operations = 0 before. Classic mistake
    // Firstly lets count how many operations it would take for '0101010...' and '1010101...' respectively
    int operations;
    int operations0 = 0;
    int operations1 = 0;
    // count the number of 1s and the number of 0s, whichever is less is our number of operations?

    for (int i = 0; i < strlen(s); i++){
        (s[i] == '0'? (operations0++):(operations1++));
    }
    (operations0 >= operations1)? (operations = operations1):(operations = operations0);





    // for (int i = 0; i < strlen(s)-1; i++){
    //    
    //    if (s[i] == s[i+1]){
    //        // if the current value and the next value are the same, then change the next value
    //        operations1 ++;

    //        (s[i+1] == '0')? (s[i+1] = '1'): (s[i+1] = '0'); // This gives me a seg fault
    //    }
    // }
    // if (operations == 0){
    //     printf("This string is already alternating\n");
    // }
    return operations;
}

