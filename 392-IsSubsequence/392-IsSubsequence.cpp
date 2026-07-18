// Last updated: 18/07/2026, 21:07:09
1class Solution {
2public:
3    bool isSubsequence(string s, string t) {
4        int i = 0, j = 0;
5        while(i < s.size() && j < t.size()){
6            if(s[i] == t[j])
7                i++;
8            j++;
9        }
10        return i == s.size();
11    }
12};