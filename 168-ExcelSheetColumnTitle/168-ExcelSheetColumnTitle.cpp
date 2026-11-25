// Last updated: 25/11/2026, 19:50:14
1class Solution {
2public:
3    string convertToTitle(int columnNumber) {
4        string ans = "";
5        while(columnNumber > 0){
6            columnNumber--;
7            char ch = 'A' + columnNumber % 26;
8            ans = ch + ans;
9            columnNumber /= 26;
10        }
11        return ans;
12    }
13};