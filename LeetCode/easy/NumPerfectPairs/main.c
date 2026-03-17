// This is my C file for the Number of Perfect Pairs file

/* Definition of perfect pairs: 
a pair of indices, i and j is called 'perfect' if they satisfy the following decisions:
1. i < j (These are the indexes!)
2. let a = nums[i], b = nums[j], Then:
    - min(|a-b|, |a-b|) <= min(|a|, |b|) 
    - max(|a-b|, |a-b|) >= max(|a|, |b|) 

    Keep in mind, we are trying to return the number of DISTINCT pairs
*/

#include <stdlib.h>
#include <stdbool.h>

long long perfectPairs(int*, int);
bool isPerfectPair(int, int);
int min(int, int);
int max(int, int);

int main(){
    
    return 0;
}


// Unfortunately with this double loop, we exceed the timeLimit. This is kind of what happened in interview
long long perfectPairs(int* nums, int numsSize) {
    long long totalPairs;
    // So we are going to do a double loop for now:
    // For every value in numsize:
    for (int i = 0; i < numsSize; i++){
        // We will compare it to every value AFTER it's position 
        for (int j = i; j < numsSize; i++){
            // here we compare (i will always be greater than j)
            if (isPerfectPair(nums[i], nums[j])) totalPairs ++;
        }
    }

    return totalPairs;
}

// So we are going to make a separate function so that we can keep the code clean
bool isPerfectPair(int x, int y){
    if((min(abs(x-y), abs(x+y)) <= min(abs(x), abs(y))) && 
        (max(abs(x-y), abs(x+y)) >= max(abs(x), abs(y)))) return 1;
    else return 0;

}

int min(int x, int y){
    // If x is less, return x, otherwise return y
    if (x < y) return x; else return y;
}

int max(int x, int y){
    // If x is greater, return x, otherwise return y
    if (x > y) return x; else return y;
}
