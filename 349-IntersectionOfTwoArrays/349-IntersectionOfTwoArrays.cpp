// Last updated: 01/03/2026, 20:22:00
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) { 
        unordered_map<int,int>mp;
        vector<int>ans;
        for(auto i: nums1){
            mp[i]++;
        }
        for(auto i : nums2) {
            if(mp.find(i) != mp.end()) {
                ans.push_back(i);
                mp.erase(i);
            }
        }
        return ans;
    }
};