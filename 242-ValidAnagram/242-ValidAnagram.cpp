// Last updated: 03/08/2026, 19:57:58
1class Solution {
2public:
3    bool isAnagram(string s, string t) {
4        sort(s.begin(), s.end());
5        sort(t.begin(), t.end());
6        if(s == t){
7            return true;
8        }
9        return false;
10    }
11};