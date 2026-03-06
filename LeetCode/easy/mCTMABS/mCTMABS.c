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
    // count the number of 1s and the number of 0s, whichever is less is our number of operations?
    int operations;
    int operations0 = 0;
    int operations1 = 0;
    int flag = 0; // Assume alternating
    // But we have to check if it's alternating (in which case we return 0)
    for (int i = 0; i <strlen(s)-1; i++){
        if(s[i] == s[i+1]){
            flag = 1;
        }
    }
    if (flag){
        for (int i = 0; i < strlen(s); i++){
            (s[i] == '0'? (operations0++):(operations1++));
        }
    }
    else{
        operations1 = 0;
    }
    (operations0 >= operations1)? (operations = operations1):(operations = operations0);
    return operations;
}

