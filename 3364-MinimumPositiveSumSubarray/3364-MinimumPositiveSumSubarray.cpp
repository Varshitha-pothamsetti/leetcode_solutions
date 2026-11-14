// Last updated: 14/11/2026, 23:34:34
1class Solution {
2public:
3    int minimumSumSubarray(vector<int>& nums, int l, int r) {
4        int ans = INT_MAX;
5        for(int i = 0; i < nums.size(); i++){
6            int sum = 0;
7            for(int j = i; j < nums.size(); j++){
8                sum += nums[j];
9                int len = j - i + 1;
10                if(len >= l && len <= r && sum > 0){
11                    ans = min(ans, sum);
12                }
13            }
14        }
15        if(ans == INT_MAX){
16            return -1;
17        }
18        return ans;
19    }
20};