// Last updated: 05/03/2026, 10:37:09
1class Solution {
2public:
3    void moveZeroes(vector<int>& nums) {
4        int i = 0, n = 0;
5        while(i < nums.size()){
6            if(nums[i] != 0) swap(nums[i], nums[n++]);
7            i++;
8        }
9    }
10};
11
12