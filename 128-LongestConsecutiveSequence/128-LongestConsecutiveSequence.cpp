// Last updated: 18/08/2026, 21:20:35
1class Solution {
2public:
3    int longestConsecutive(vector<int>& nums) {
4        unordered_set<int> s(nums.begin(), nums.end());
5        int ans = 0;
6        for(int x : s){
7            if(s.find(x - 1) == s.end()){
8                int curr = x;
9                int len = 1;
10                while(s.find(curr + 1) != s.end()){
11                    curr++;
12                    len++;
13                }
14                ans = max(ans, len);
15            }
16        }
17        return ans;
18    }
19};