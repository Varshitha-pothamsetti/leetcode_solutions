// Last updated: 03/10/2026, 19:41:34
1class Solution {
2public:
3    int maxDepth(string s) {
4        int count = 0, ans = 0;
5        for(char c : s){
6            if(c == '('){
7                count++;
8            ans = max(ans, count);
9            }
10            else if(c == ')'){
11                count--;
12            }
13        }
14        return ans;
15    }
16};