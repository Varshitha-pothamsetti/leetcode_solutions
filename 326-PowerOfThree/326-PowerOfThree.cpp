// Last updated: 01/03/2026, 20:22:03
class Solution {
public:
    bool isPowerOfThree(int n) {
      if(n <= 0) return false;
      int num = 1;
      while(num < INT_MAX / 3) {
        if(num == n) return true;
        num *= 3;
      }  
      if(num == n) return true;
      return false;
    }
};