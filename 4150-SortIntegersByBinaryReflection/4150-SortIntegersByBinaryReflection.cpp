// Last updated: 27/02/2026, 19:58:23
class Solution {
public:
    int reflect(int x) {
        int res = 0;
        while(x > 0) {
            res = (res << 1) | (x & 1);
            x >>= 1;
        }
        return res;
    }
    vector<int> sortByReflection(vector<int>& nums) {
        vector<pair<int, int>>v;
        for(int x : nums) {
            v.push_back({reflect(x), x});
        }
        sort(v.begin(), v.end(), [](auto &a, auto &b){
            if(a.first == b.first)
                return a.second < b.second;
            return a.first < b.first;
        });
        vector<int> ans;
        for(auto &p : v) ans.push_back(p.second);
        return ans;
    }
};