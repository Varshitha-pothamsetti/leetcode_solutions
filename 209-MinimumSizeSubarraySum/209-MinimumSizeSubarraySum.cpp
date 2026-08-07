// Last updated: 07/08/2026, 21:53:41
1class Solution {
2public:
3    int minSubArrayLen(int target, vector<int>& nums) {
4        int left = 0;
5        int current_sum = 0;
6        int min_length = INT_MAX;
7        for(int right = 0; right < nums.size(); ++right){
8            current_sum += nums[right];
9            while(current_sum >= target){
10                min_length = min(min_length, right-left + 1);
11                current_sum -= nums[left];
12                left++;
13            }
14        }
15        return(min_length == INT_MAX) ? 0 : min_length;
16    }
17};