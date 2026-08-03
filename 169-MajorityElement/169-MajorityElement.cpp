// Last updated: 03/08/2026, 20:07:58
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int count = 0;
5        int ans = 0;
6        for(int i = 0; i < nums.size(); i++){
7            if(count == 0){
8                ans = nums[i];
9            }
10            if(nums[i] == ans)
11               count++;
12            else
13               count--;
14        }
15        return ans;
16    }
17};