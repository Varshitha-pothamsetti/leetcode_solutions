// Last updated: 09/09/2026, 21:22:13
class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int n = nums.size();
        int i = n - 1;
        while(i > 0 && nums[i - 1] < nums[i]){
            i--;
        }
        return i;
    }
};