// Last updated: 01/11/2026, 21:19:49
1class Solution {
2public:
3    bool isMonotonic(vector<int>& nums) {
4        bool inc = true;
5        bool des = true;
6        for(int i = 1; i < nums.size(); i++){
7            if(nums[i] < nums[i - 1]){
8                inc = false;
9            }
10            if(nums[i] > nums[i - 1]){
11                des = false;
12            }
13        }
14        return inc || des;
15    }
16};