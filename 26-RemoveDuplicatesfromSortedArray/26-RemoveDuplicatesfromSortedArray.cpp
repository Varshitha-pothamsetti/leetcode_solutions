// Last updated: 06/08/2026, 11:31:25
1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        if (nums.size() == 0) {
5            return 0;
6        }
7
8        int k = 1;
9
10        for (int i = 1; i < nums.size(); i++) {
11            if (nums[i] != nums[k - 1]) {
12                nums[k] = nums[i];
13                k++;
14            }
15        }
16
17        return k;
18    }
19};