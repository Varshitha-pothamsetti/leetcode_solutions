// Last updated: 01/03/2026, 20:22:59
class Solution {
public:
    int climbStairs(int n) {
       int a = 1, b = 1;
       for(int i = 1; i < n; i++){
        b += a;
        a = b - a;
       } 
       return b;
    }
};