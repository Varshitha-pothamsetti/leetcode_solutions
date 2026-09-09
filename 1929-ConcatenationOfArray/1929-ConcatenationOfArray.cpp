// Last updated: 09/09/2026, 21:27:53
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[i]);
        }

        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[i]);
        }

        return ans;
    }
};