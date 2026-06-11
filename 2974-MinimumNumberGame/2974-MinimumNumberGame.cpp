// Last updated: 11/06/2026, 20:09:25
1class Solution {
2public:
3    vector<int> numberGame(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5         vector<int> arr;
6        for(int i = 0; i < nums.size(); i += 2){
7            arr.push_back(nums[i + 1]);
8            arr.push_back(nums[i]);
9        }
10        return arr;
11    }
12};