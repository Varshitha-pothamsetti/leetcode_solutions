// Last updated: 06/08/2026, 20:25:24
1class Solution {
2public:
3    vector<int> majorityElement(vector<int>& nums) {
4        unordered_map<int, int> freq;
5        vector<int> ans;
6        for(int num : nums){
7            freq[num]++;
8        }
9        int limit = nums.size() / 3;
10        for(auto it : freq){
11            if(it.second > limit){
12                ans.push_back(it.first);
13            }
14        }
15        return ans;
16    }
17};