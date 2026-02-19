#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    else if (x == 0){
      return true;
    }
    
    // Need to keep in mind that if x == 0 this = -inf
    int length = floor(log10(x));
    int realLength = length+1;
    vector<int>numbers(length);


    for (int i = 0; i<=length; i++){
        numbers[i] = (x%10);
        x = floor(x/10);
    }
    // if even number of numbers
    if (realLength%2 == 0){
        for (int i = 0; i <= floor(length/2); i++){
            if(numbers[i] != numbers[length-i]){
                return false;
            }
        }
        return true;
    }
    // if odd number of numbers
    else if (realLength%2 == 1){
        for (int i = 0; i < floor(length/2); i++){
            if(numbers[i]!= numbers[length-i]){
                return false;
            }
        }
        return true;
    }
    return false;
    }
};

int main(){
  Solution solution = Solution();
  cout<<solution.isPalindrome(-1223)<<endl;
  return 0;
}
