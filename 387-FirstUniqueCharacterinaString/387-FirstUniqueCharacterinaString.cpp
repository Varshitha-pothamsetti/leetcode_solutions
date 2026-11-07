// Last updated: 07/11/2026, 22:10:17
1class Solution {
2public:
3    int firstUniqChar(string s) {
4        int freq[26] = {0};
5        for(int i = 0; i < s.length(); i++){
6            freq[s[i] - 'a']++; 
7        }
8        for(int i = 0; i < s.length(); i++){
9            if(freq[s[i] - 'a'] == 1){
10                return i;
11            }
12        }
13        return -1;
14    }
15};