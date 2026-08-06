// Last updated: 06/08/2026, 11:33:29
1class Solution {
2public:
3    bool isPalindrome(string s) {
4        int left = 0;
5        int right = s.length() - 1;
6
7        while (left < right) {
8            while (left < right && !isalnum(s[left])) {
9                left++;
10            }
11
12            while (left < right && !isalnum(s[right])) {
13                right--;
14            }
15
16            if (tolower(s[left]) != tolower(s[right])) {
17                return false;
18            }
19
20            left++;
21            right--;
22        }
23
24        return true;
25    }
26};