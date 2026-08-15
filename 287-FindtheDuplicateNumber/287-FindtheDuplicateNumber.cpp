// Last updated: 15/08/2026, 13:56:31
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        int arr = 0;
5        sort(nums.begin(), nums.end());
6        for(int i = 0 ; i < nums.size()-1;i++){
7            if(nums[i] == nums[i+1]){
8                arr = nums[i];
9                break;
10            }
11        }
12        return arr;
13    }
14};