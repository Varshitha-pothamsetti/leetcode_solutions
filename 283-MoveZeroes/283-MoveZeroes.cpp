// Last updated: 01/03/2026, 20:22:12
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0, n = 0;
        while(i < nums.size()){
            if(nums[i] != 0) swap(nums[i], nums[n++]);
            i++;
        }
    }
};


