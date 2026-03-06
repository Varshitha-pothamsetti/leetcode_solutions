// Last updated: 06/03/2026, 20:12:13
1class Solution {
2public:
3    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
4        unordered_set<int> s1(nums1.begin(), nums1.end());
5        unordered_set<int> s2(nums2.begin(), nums2.end());     
6        vector<int> a, b;     
7        for(int x : s1){
8            if(s2.find(x) == s2.end())
9                a.push_back(x);
10        }      
11        for(int x : s2){
12            if(s1.find(x) == s1.end())
13                b.push_back(x);
14        }
15        
16        return {a, b};
17    }
18};