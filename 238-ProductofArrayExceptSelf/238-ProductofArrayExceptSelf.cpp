// Last updated: 15/08/2026, 14:01:09
1class Solution {
2public:
3    vector<int> productExceptSelf(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> left(n);
6        vector<int> right(n);
7        vector<int> ans(n);
8        left[0] = 1;
9        for(int i = 1; i < n ; i++){
10            left[i] = left[i - 1] * nums[i - 1];
11        }
12        right[n - 1] = 1;
13        for(int i = n - 2; i >= 0; i--){
14            right[i] = right[i + 1] * nums[i + 1];
15        }
16        for(int i = 0; i < n ; i++){
17            ans[i] = left[i] * right[i];
18        }
19        return ans;
20    }
21};