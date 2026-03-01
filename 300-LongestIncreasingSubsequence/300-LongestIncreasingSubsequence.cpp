// Last updated: 01/03/2026, 20:22:07
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> LIS;

        for(int i = 0; i < nums.size(); i++) {
            if(LIS.empty() || LIS.back() < nums[i]) {
                LIS.push_back(nums[i]);
            } 
            else {
                int idx = lower_bound(LIS.begin(), LIS.end(), nums[i]) - LIS.begin();
                LIS[idx] = nums[i];
            }
        }
        return LIS.size();
    }
};
