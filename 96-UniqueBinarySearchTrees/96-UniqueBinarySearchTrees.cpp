// Last updated: 01/09/2026, 19:20:01
1class Solution {
2public:
3    int numTrees(int n) {
4        vector<long long> dp(n + 1, 0);
5        dp[0] = 1;
6        for (int nodes = 1; nodes <= n; nodes++) {
7            for (int root = 1; root <= nodes; root++) {
8                dp[nodes] += dp[root - 1] * dp[nodes - root];
9            }
10        }
11        return dp[n];
12    }
13};