// Last updated: 03/08/2026, 15:31:35
1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        if(strs.empty()) return "";
5        string prefix = strs[0];
6        for(size_t i = 1; i < strs.size(); ++i){
7            const string& s = strs[i];
8            while(s.find(prefix) != 0){
9                if(prefix.empty()) return "";
10                prefix.pop_back();
11            }
12        }
13        return prefix;
14    }
15};