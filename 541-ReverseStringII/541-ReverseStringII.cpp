// Last updated: 16/05/2026, 20:34:40
1class Solution {
2public:
3    string reverseStr(string s, int k) {
4        for (int i = 0; i < s.length(); i += 2 * k) {
5            int left = i;
6            int right = min(i + k - 1, (int)s.length() - 1);
7            while(left < right){
8                swap(s[left], s[right]);
9                left++;
10                right--;
11            }
12        }
13        return s;
14    }
15};