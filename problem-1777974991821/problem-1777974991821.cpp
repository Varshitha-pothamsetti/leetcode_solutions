// Last updated: 05/05/2026, 15:26:31
1class Solution {
2public:
3    long long minOperations(vector<int>& nums) {
4        long long ans = 0;
5        for(int i = 0; i < nums.size() - 1; i++){
6            if(nums[i] > nums[i + 1]){
7                ans += nums[i] - nums[i + 1];
8            }
9        }
10        return ans;
11    }
12};