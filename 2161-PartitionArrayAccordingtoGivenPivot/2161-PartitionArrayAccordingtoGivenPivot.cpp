// Last updated: 08/06/2026, 20:19:22
1class Solution {
2public:
3    vector<int> pivotArray(vector<int>& nums, int pivot) {
4        vector<int> smaller, equal, greater;
5        for(int num : nums){
6            if(num < pivot)
7                smaller.push_back(num);
8            else if(num == pivot)
9                 equal.push_back(num);
10            else
11                 greater.push_back(num);
12        }
13        vector<int> ans;
14        for(int x : smaller) ans.push_back(x);
15        for(int x : equal) ans.push_back(x);
16        for(int x : greater) ans.push_back(x);
17
18        return ans;
19    }
20};