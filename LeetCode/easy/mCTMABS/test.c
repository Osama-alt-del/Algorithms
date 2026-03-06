/* This is my test file */

#include "./mCTMABS.c"
#include <string.h>
#include <stdio.h>

int main(){
    // So I can assume that they will enter
    char s[]  = "01110";
    // printf("%c\n", s[1]);
    // printf("%c\n", s[1+1]);
    // s[0+1] = '0';
    // printf("%s\n", s);
    printf("%d\n", minimumOperations(s));
    // printf("The minimum number of operations is: %d", minimumOperations(s));
    printf("%s\n", s);
    return 0;
}
