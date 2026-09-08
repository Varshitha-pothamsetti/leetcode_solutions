// Last updated: 08/09/2026, 20:58:24
1class Solution {
2public:
3    int countCommas(int n) {
4        int ans = 0;
5        for(int i = 1000; i <= n; i++){
6            int x = i;
7            while(x >= 1000){
8                ans++;
9                x /= 1000;
10            }
11        }
12        return ans;
13    }
14};