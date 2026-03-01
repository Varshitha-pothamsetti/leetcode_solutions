// Last updated: 01/03/2026, 20:23:06
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int fastestreach = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i > fastestreach){
            return false;
            }
            fastestreach = max(fastestreach, i + nums[i]);
            if(fastestreach >= nums.size() - 1){
                return true;
            }
        }
        return fastestreach >= nums.size() - 1;
    }
};