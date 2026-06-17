// Last updated: 17/06/2026, 21:43:40
1class Solution {
2public:
3    int reverseBits(int n) {
4        unsigned int num = (unsigned int)n;
5        unsigned int ans = 0;
6
7        for(int i = 0; i < 32; i++){
8            ans = (ans << 1) | (num & 1);
9            num >>= 1;
10        }
11        return (int)ans;
12    }
13};