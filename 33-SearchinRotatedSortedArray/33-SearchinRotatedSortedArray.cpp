// Last updated: 05/05/2026, 21:44:12
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int low = 0, high = nums.size() - 1;
5        while (low <= high) {
6            int mid = low + (high - low) / 2;
7            if (nums[mid] == target)
8                return mid;
9            if (nums[low] <= nums[mid]) {
10                if (nums[low] <= target && target < nums[mid]) {
11                    high = mid - 1;
12                } else {
13                    low = mid + 1;
14                }
15            }            
16            else {
17                if (nums[mid] < target && target <= nums[high]) {
18                    low = mid + 1;
19                } else {
20                    high = mid - 1;
21                }
22            }
23        }
24
25        return -1;
26    }
27};