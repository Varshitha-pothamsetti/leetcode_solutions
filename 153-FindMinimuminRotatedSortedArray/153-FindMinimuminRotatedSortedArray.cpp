// Last updated: 05/05/2026, 18:18:44
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int low = 0, high = nums.size() - 1;
5        while(low < high){
6            int mid = low + (high - low) / 2;
7            if(nums[mid] > nums[high]){
8                low = mid + 1;
9            }
10            else{
11                high = mid;
12            }
13        }
14        return nums[low];
15    }
16};