// Last updated: 13/05/2026, 21:17:09
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int size = 0;
        int right = nums.size() -1;

        while(left <= right){
        int mid = left + (right - left)/2;
        if(nums[mid] == target){
            return mid;
        }
            else if(nums[mid] < target ){
                left = mid + 1;
            }
            else {
                right = mid - 1; 
            }
        }
        return -1;
    }
};