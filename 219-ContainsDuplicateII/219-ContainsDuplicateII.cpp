// Last updated: 07/08/2026, 11:34:52
1class Solution {
2public:
3    bool containsNearbyDuplicate(vector<int>& nums, int k) {
4        unordered_map<int, int>mp;
5        int n = nums.size();
6        for(int i = 0; i < n; i++){
7            if(mp.count(nums[i])){
8                if(abs(i-mp[nums[i]]) <= k) return true;
9                }
10                mp[nums[i]] = i;
11                }
12            return false; 
13        }
14   };