#include <stdio.h>
#include <string.h> // Need this for strlen()


// Study and understand this: (The following is a solution taken from leetcode:
int minOperations(char* s) {
    // This is for when it starts with 1010:
    int alt10 = 0; // 1010 ...
    // This is for when it starts with 0101:
    int alt01 = 0; // 0101 ...
    int i;
    // Continue as long as s[i] != '\0'
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

