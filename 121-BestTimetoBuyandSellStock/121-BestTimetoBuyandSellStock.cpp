// Last updated: 07/08/2026, 10:41:28
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int minprice = INT_MAX;
5        int maxprofit = 0;
6        for (int i = 0; i < prices.size(); i++) {
7            if (prices[i] < minprice) {
8                minprice = prices[i];
9            }
10            else if (prices[i] - minprice > maxprofit) {
11                maxprofit = prices[i] - minprice;
12            }
13        }
14        return maxprofit;
15    }
16};