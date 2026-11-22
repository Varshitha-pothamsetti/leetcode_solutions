// Last updated: 22/11/2026, 20:24:39
1class Solution {
2public:
3    bool checkString(string s) {
4        bool found = false;
5        for(int i = 0; i < s.length(); i++){
6            if(s[i] == 'b'){
7                found = true;
8            }
9            else if(s[i] == 'a' && found){
10                return false;
11            }
12        }
13        return true;;
14    }
15};