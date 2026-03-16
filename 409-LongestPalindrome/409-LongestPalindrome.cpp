// Last updated: 16/03/2026, 20:04:44
1class Solution {
2public:
3    int longestPalindrome(string s) {
4        unordered_map<char, int>freq;
5        for(char c:s){
6            freq[c]++;
7        }
8        int len = 0;
9        bool found = false;
10
11        for(auto it : freq){
12            if(it.second % 2 == 0){
13                len += it.second;
14            }
15            else{
16                len += it.second - 1;
17                found = true;
18            }
19        }
20        if(found) len += 1;
21        return len;
22    }
23};