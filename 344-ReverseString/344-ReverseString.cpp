// Last updated: 06/08/2026, 11:30:35
1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        int left = 0;
5        int right = s.size() - 1;
6
7        while (left < right) {
8            swap(s[left], s[right]);
9            left++;
10            right--;
11        }
12    }
13};