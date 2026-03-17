/* !!! USE THE -lm flag during compilation or the math library will not be linked!!!*/
/* !!! RETURN IS AN STATEMENT NOT AN EXPRESSION !!!!, you can only use expressions within the ternary operator ? : ; */
/* !!! MEMORIZE THE FOR LOOP LOL !!! */
/* !!!  Make sure that all of negative numbers return 0 */
/* This is for checking a palindrome */

#include <stdio.h>
#include <stdbool.h> /* Need this for bools apparently */
#include <math.h> /* Need this for power */
// This function returns an integer
bool isPalindrome(int);
int getValue(int, int);
int getIntLength(int);

int main(){
    // So this doesn't work for some reason? Why do negative numbers not work?
    int test = -121;
    printf("%d\n", isPalindrome(test));
    return 0;
}

// Take an integer and check if it's a palindrome or not;
// Because it's an integer, we can have temporary vars or make an array and just check stuff based on it
bool isPalindrome(int x) {
    int length = getIntLength(x);
    // All negatives are not palindromes
    if (x < 0) return 0;
    if (length == 1) return 1; // Because integers with 1 value are palindromes

    int flag = 1; // Assume it's a palindrome

    for (int i = 0; i < floor(length/2); i++){
        // Debugging
        int val1 = getValue(x, i+1);
        int val2 = getValue(x, length-i);
        if (val1 != val2){
            flag = 0;
            break;
        }
    }
    // Return 0 if the flag is 0 (the if statement has been fulfilled)
    if (flag == 0) return 0;

    return 1;
}

// Based on the integer and the index, we should be able to extract the value:
int getValue(int x, int i){
    // So we can divide or use math to somehow get the value we want
    // we can use the modulo function (% for the remainder). we divide by 10^i, where i is the position we want I guess
    if (i >=1 ) // for edge cases 
        return (x % (int)pow(10, i))/(int)pow(10, i-1);
    else
        return 0; // we have to make sure the the function returns somehow I guess
        
}

int getIntLength(int x){
    int length = floor(log10(x)) + 1; // This will give us the length of the array
    return length;
}
