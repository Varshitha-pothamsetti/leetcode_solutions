// Last updated: 05/05/2026, 18:10:48
1class Solution {
2public:
3    vector<int> searchRange(vector<int>& nums, int target) {
4        int startpos = -1, endpos = -1;
5        int n = nums.size();
6        for(int i = 0; i < n; i++){
7            if(nums[i] == target){
8                startpos = i;
9                break;
10            }
11        }
12        for(int i = n - 1; i >= 0; i--){
13            if(nums[i] == target){
14                endpos = i;
15                break;
16            }
17        }
18        return {startpos, endpos};
19    }
20};