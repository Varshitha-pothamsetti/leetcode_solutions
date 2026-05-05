// Last updated: 05/05/2026, 11:10:47
1class Solution {
2public:
3    int search(vector<int>& nums, int target) {
4        int left = 0;
5        int size = 0;
6        int right = nums.size() -1;
7
8        while(left <= right){
9        int mid = left + (right - left)/2;
10        if(nums[mid] == target){
11            return mid;
12        }
13            else if(nums[mid] < target ){
14                left = mid + 1;
15            }
16            else {
17                right = mid - 1; 
18            }
19        }
20        return -1;
21    }
22};