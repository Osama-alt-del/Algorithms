/* This is my test file */

#include "./mCTMABS.c"
#include <string.h>
#include <stdio.h>

int main(){
    // So I can assume that they will enter
    // With 10010100 it gives me 5, where it should be 3
    char s[]  = "10";
    //          "10101010" // required 5 operations
    //          "01010101" // requires 3 operations
    // printf("%c\n", s[1]);
    // printf("%c\n", s[1+1]);
    // s[0+1] = '0';
    // printf("%s\n", s);
    printf("%d\n", minimumOperations(s));
    // printf("The minimum number of operations is: %d", minimumOperations(s));
    printf("%s\n", s);
    return 0;
}
