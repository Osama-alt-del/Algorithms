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


// Study and understand this: (The following is a solution taken from leetcode:
int minOperations(char* s) {
    int alt10 = 0; // 0101 ...
    int alt01 = 0; // 1010 ...
    int i;
    for (int i = 0; s[i] != '\0'; ++i) {
        if ((i & 1) == 0) {
            alt01 += (s[i] == '1' ? 1 : 0); // we expect even indices add one on `1`
            alt10 += (s[i] == '0' ? 1 : 0); // we expect even indices add one on `0`
        } else {
            alt01 += (s[i] == '0' ? 1 : 0); // we expect odd indices add one on `0`
            alt10 += (s[i] == '1' ? 1 : 0); // we expect odd indices add one on `1`
        }
    }
    return alt01 < alt10 ? alt01 : alt10;
}

