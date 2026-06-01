// Last updated: 01/06/2026, 08:53:51
1class Solution {
2public:
3    int minimumCost(vector<int>& cost) {
4     sort(cost.begin(), cost.end(), greater<int>());
5     int ans = 0;
6     for(int i = 0; i < cost.size(); i++){
7        if(i % 3 != 2)
8            ans += cost[i];
9       }
10       return ans;   
11    }
12};