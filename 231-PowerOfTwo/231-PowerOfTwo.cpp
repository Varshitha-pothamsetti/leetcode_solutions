// Last updated: 01/03/2026, 20:22:20
class Solution {
public:
    bool isPowerOfTwo(int n) {
       return n > 0 && (n &(n - 1)) == 0;
    }
};