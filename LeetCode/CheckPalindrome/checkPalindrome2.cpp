#include <cmath>
#include <iostream>
using namespace std;
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
    // Edge Cases
    if(x<0){
        return false;
    }
    else if (x == 0){
      return true;
    }
    // Optimized code here
    double reverse = 0;
    int length = floor(log10(x))+1;
    int count = 0;
    int temp = x;

    while(x!=reverse){
      reverse = reverse*10 + temp%10;
      cout<<x<<" "<<reverse<<endl;
      // need a temp variable, else reverse will be a
      // repetition of the number in 10^0 position (x never changes)
      temp/=10;
      // increment count, if greater than length,
      // while loop is still running, so x still != reverse,
      // so false.
      count +=1;
      if(count > length){
        return false;
      }
    }
    return true;
    }
};

int main(){
  Solution solution = Solution();
  cout<<solution.isPalindrome(120121)<<endl;
  return 0;
}
