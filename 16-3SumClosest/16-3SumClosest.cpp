// Last updated: 02/10/2026, 20:13:11
1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4        sort(nums.begin(), nums.end());
5        int ans = nums[0] + nums[1] + nums[2];
6        for(int i = 0; i < nums.size(); i++){
7            int left = i + 1;
8            int right = nums.size() - 1;
9
10            while(left < right){
11                int sum = nums[i] + nums[left] + nums[right];
12                if(abs(target - sum) < abs(target - ans)){
13                    ans = sum;
14                }
15                if(sum == target){
16                    return sum;
17                }
18                else if(sum < target){
19                    left++;
20                }
21                else{
22                    right--;
23                }
24            }
25        }
26         return ans;
27    }
28};