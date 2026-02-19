// This is the fastest method.
// using log10 takes a while apparently
// halfing and then doing makes it much faster
class Solution {
public:
    bool isPalindrome(int x) {
        // Don't need edge case for 0, because it works for 0
        // x%10 == 0 && x!= 0 is a check for decimal numbers 
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        int reversed = 0;
        // So if reversed has the same degree as x, stop
        while (x > reversed) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }
        // If odd, then reversed will have 1 extra number so /10
        // If even just check normally.
        // If not a palindrome, neither will be true 
        return x == reversed || x == reversed / 10;
    }
};

int main(){
  Solution solution = Solution();
  cout<<solution.isPalindrome(120121)<<endl;
  return 0;
}
