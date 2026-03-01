// Last updated: 01/03/2026, 20:23:09
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0,ans = INT_MIN;
        for(int i = 0;i < nums.size(); i++){
            sum += nums[i];
            if(ans < sum){
                ans = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }
        return ans;
    }
};