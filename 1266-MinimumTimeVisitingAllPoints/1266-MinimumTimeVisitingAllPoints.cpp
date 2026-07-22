// Last updated: 22/07/2026, 20:51:20
1class Solution {
2public:
3    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
4        int ans = 0;
5        for(int i = 1; i < points.size(); i++){
6            int dx = abs(points[i][0] - points[i - 1][0]);
7            int dy = abs(points[i][1] - points[i - 1][1]);
8            ans += max(dx, dy);
9        }
10        return ans;
11    }
12};