// Last updated: 11/09/2026, 21:09:45
1class Solution {
2public:
3    string longestPalindrome(string s) {
4        int start = 0;
5        int maxLen = 1;
6        for (int i = 0; i < s.length(); i++) {
7            int left = i, right = i;
8            while (left >= 0 && right < s.length() &&
9                   s[left] == s[right]) {
10                if (right - left + 1 > maxLen) {
11                    start = left;
12                    maxLen = right - left + 1;
13                }
14                left--;
15                right++;
16            }
17            left = i;
18            right = i + 1;
19
20            while (left >= 0 && right < s.length() &&
21                   s[left] == s[right]) {
22                if (right - left + 1 > maxLen) {
23                    start = left;
24                    maxLen = right - left + 1;
25                }
26                left--;
27                right++;
28            }
29        }
30
31        return s.substr(start, maxLen);
32    }
33};