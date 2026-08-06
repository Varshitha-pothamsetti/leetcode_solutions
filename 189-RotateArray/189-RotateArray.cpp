// Last updated: 06/08/2026, 21:20:32
1class Solution {
2public:
3    void rotate(vector<int>& nums, int k) {
4        int n = nums.size();
5        k = k % n;
6        vector<int> ans(n);
7        for(int i = 0; i < n; i++){
8            ans[(i + k) % n] = nums[i];
9        }
10        nums = ans;
11    }
12};