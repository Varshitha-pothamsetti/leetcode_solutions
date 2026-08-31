// Last updated: 31/08/2026, 20:10:17
1class Solution {
2public:
3    int findComplement(int num) {
4        int mask = 0;
5        int n = num;
6        while(n > 0){
7            mask = (mask << 1) | 1;
8            n >>= 1; 
9        }
10        return num ^ mask;
11    }
12};