// Last updated: 29/08/2026, 21:19:05
1class Solution {
2public:
3    int maxCount(int m, int n, vector<vector<int>>& ops) {
4        int minA = m;
5        int minB = n;
6        for(auto &op : ops){
7            minA = min(minA, op[0]);
8            minB = min(minB, op[1]);
9        }
10        return minA * minB;
11    }
12};