// Last updated: 19/09/2026, 21:27:51
1class Solution {
2public:
3    int romanToInt(string s) {
4        map<char, int> mp = {
5            {'I', 1},
6            {'V', 5},
7            {'X', 10},
8            {'L', 50},
9            {'L', 50},
10            {'C', 100},
11            {'D', 500},
12            {'M', 1000}
13        };
14        int ans = 0;
15        for(int i = 0; i < s.length(); i++){
16            if(i + 1 < s.length() && mp[s[i]] < mp[s[i + 1]]){
17                ans -= mp[s[i]];
18            }
19            else{
20                ans += mp[s[i]];
21            }
22        }
23        return ans;
24    }
25};