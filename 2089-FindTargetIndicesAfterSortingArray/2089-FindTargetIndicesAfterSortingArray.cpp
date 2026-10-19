// Last updated: 19/10/2026, 21:23:10
1class Solution {
2public:
3    vector<int> targetIndices(vector<int>& nums, int target) {
4        sort(nums.begin(), nums.end());
5        vector<int> ans;
6        for(int i = 0; i < nums.size(); i++){
7            if(nums[i] == target){
8                ans.push_back(i);
9            }
10        } 
11        return ans;
12    }
13};