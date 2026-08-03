// Last updated: 03/08/2026, 19:56:20
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) {
4        unordered_map<string, vector<string>> mp;
5        for(string s : strs){
6            string key = s;
7            sort(key.begin(), key.end());
8            mp[key].push_back(s);
9        }
10        vector<vector<string>> ans;
11        for(auto &it : mp){
12            ans.push_back(it.second);
13        }
14        return ans;
15    }
16};