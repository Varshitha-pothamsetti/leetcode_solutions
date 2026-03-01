// Last updated: 01/03/2026, 20:21:07
class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int max = INT_MIN;
        int min = INT_MAX;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > max){
                max = nums[i];
            }
            if(nums[i] < min){
                min = nums[i];
            }
        }
        int ans = max - min;
        if(ans < 2 * k){
            return 0;
        }
        return ans - 2 * k;
    }
};