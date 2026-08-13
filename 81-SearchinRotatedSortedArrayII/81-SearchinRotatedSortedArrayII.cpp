// Last updated: 13/08/2026, 21:28:55
1class Solution {
2public:
3    bool search(vector<int>& nums, int target) {
4        int left = 0;
5        int right = nums.size() - 1;
6        while(left <= right){
7            int mid = left + (right - left) / 2;
8            if(nums[mid] == target)
9             return true;
10            if(nums[left] == nums[mid] && nums[mid] == nums[right]){
11                left++;
12                right--;
13            }
14            else if(nums[left] <= nums[mid]){
15                if(nums[left] <= target && target < nums[mid])
16                  right = mid - 1;
17                else 
18                   left =  mid + 1;
19            }
20            else{
21                if(nums[mid] < target && target <= nums[right])
22                   left = mid + 1;
23                else
24                   right = mid - 1;
25            }
26        }
27        return false;
28    }
29};