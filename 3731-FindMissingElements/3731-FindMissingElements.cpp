// Last updated: 18/09/2026, 14:29:50
1class Solution {
2public:
3    vector<int> findMissingElements(vector<int>& nums) {
4        int min = *min_element(nums.begin(), nums.end());
5        int max = *max_element(nums.begin(), nums.end());
6        vector<int> ans;
7        for(int i = min; i <= max; i++){
8            if(find(nums.begin(), nums.end(), i) == nums.end()){
9                ans.push_back(i);
10            }
11        }
12        return ans;
13    }
14};