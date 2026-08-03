// Last updated: 03/08/2026, 19:51:53
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) {
4        unordered_set<int> s;
5        for(int x : nums){
6            if(s.count(x))
7             return true;
8            s.insert(x);
9        }
10        return false;
11    }
12};