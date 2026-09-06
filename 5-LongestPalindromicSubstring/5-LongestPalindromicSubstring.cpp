// Last updated: 06/09/2026, 21:33:01
1class Solution {
2public:
3    string longestPalindrome(string s) {
4        int start = 0;
5        int maxLen = 1;
6
7        for (int i = 0; i < s.length(); i++) {
8            int left = i, right = i;
9
10            while (left >= 0 && right < s.length() &&
11                   s[left] == s[right]) {
12                if (right - left + 1 > maxLen) {
13                    start = left;
14                    maxLen = right - left + 1;
15                }
16                left--;
17                right++;
18            }
19
20            left = i;
21            right = i + 1;
22
23            while (left >= 0 && right < s.length() &&
24                   s[left] == s[right]) {
25                if (right - left + 1 > maxLen) {
26                    start = left;
27                    maxLen = right - left + 1;
28                }
29                left--;
30                right++;
31            }
32        }
33
34        return s.substr(start, maxLen);
35    }
36};