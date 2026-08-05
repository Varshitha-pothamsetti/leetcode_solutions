// Last updated: 05/08/2026, 21:30:51
1class Solution {
2public:
3    int firstMissingPositive(vector<int>& nums) {
4        int n = nums.size();
5        int i = 0;
6        while (i < n) {
7    if (nums[i] > 0 && nums[i] <= n &&
8        nums[i] != nums[nums[i] - 1]) {
9            swap(nums[i], nums[nums[i] - 1]);
10            } else {
11                i++;
12         }
13    }
14        for(int i = 0; i < n; i++){
15            if(nums[i] != i + 1){
16                return i + 1;
17            }
18        }
19        return n + 1;
20    }
21};