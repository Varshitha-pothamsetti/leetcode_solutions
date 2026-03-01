// Last updated: 01/03/2026, 20:18:54
class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> nonneg;
        for(int x : nums){
            if(x >= 0) nonneg.push_back(x);
        }
        int m = nonneg.size();
        if(m==0) return nums;
        k %= m;
        rotate(nonneg.begin(), nonneg.begin() + k, nonneg.end());
        int idx = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] >= 0){
                nums[i] = nonneg[idx++];
            }
        }
        return nums;
    }
};