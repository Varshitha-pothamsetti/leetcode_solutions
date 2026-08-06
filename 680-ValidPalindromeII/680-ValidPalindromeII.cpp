// Last updated: 06/08/2026, 21:00:21
1class Solution {
2public:
3bool isPalindrome(const string& s, int left, int right) {
4    while(left < right) {
5        if(s[left] != s[right])
6            return false;
7            ++left;
8            --right;
9        }
10        return true;
11}
12bool validPalindrome(string s) {
13        int left = 0, right = s.length() - 1;
14        while(left < right) {
15            if(s[left] != s[right]){
16                return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
17            }
18            ++left;
19            --right;
20        }
21        return true;
22    }
23};