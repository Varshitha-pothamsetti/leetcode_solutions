// Last updated: 13/11/2026, 23:00:05
1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4        int mapS[256] = {0};
5        int mapT[256] = {0};
6        for(int i = 0; i < s.length(); i++){
7            if(mapS[s[i]] != mapT[t[i]]){
8                return false;
9            }
10            mapS[s[i]] = i + 1;
11            mapT[t[i]] = i + 1;
12        }
13        return true;
14    }
15};