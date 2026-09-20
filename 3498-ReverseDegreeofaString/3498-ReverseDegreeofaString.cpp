// Last updated: 20/09/2026, 19:56:46
1class Solution {
2public:
3    int reverseDegree(string s) {
4        int ans = 0;
5        for(int i = 0; i < s.length(); i++){
6            int value = 'z' - s[i] + 1;
7            ans += value * (i + 1);
8        }
9        return ans;
10    }
11};