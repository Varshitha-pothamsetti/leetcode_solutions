// Last updated: 04/03/2026, 14:19:42
1class Solution {
2public:
3    bool isPowerOfThree(int n) {
4      if(n <= 0) return false;
5      int num = 1;
6      while(num < INT_MAX / 3) {
7        if(num == n) return true;
8        num *= 3;
9      }  
10      if(num == n) return true;
11      return false;
12    }
13};