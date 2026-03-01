// Last updated: 01/03/2026, 20:22:11
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int arr = 0;
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                arr = nums[i];
                break;
            }
        }
        return arr;
    }
};