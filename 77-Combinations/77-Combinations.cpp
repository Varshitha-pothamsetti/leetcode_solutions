// Last updated: 01/03/2026, 20:22:58
class Solution {
public:
void Fun(int idx, int n, int k, vector<int>&ds, vector<vector<int>>&ans){
    if(idx > n){
        if(ds.size() == k){
            ans.push_back(ds);
        }
        return;
    }
    if(k == 0){
        ans.push_back(ds);
        return;
    }
    // pick
    ds.push_back(idx);
    Fun(idx + 1, n , k, ds, ans);
    ds.pop_back();

    //nonpick
    Fun(idx + 1, n, k, ds, ans);
}
    vector<vector<int>> combine(int n, int k) {
        vector<int>ds;
        vector<vector<int>>ans;
        Fun(1, n, k,ds, ans);
        return ans;
    }
};