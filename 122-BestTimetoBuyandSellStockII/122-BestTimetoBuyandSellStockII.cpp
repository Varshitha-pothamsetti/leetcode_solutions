// Last updated: 06/08/2026, 20:54:27
1class Solution {
2public:
3    int maxProfit(vector<int>& prices) {
4        int profit = 0;
5        for(int i = 1; i < prices.size(); i++){
6            if(prices[i] > prices[i - 1]){
7                profit += prices[i] - prices[i - 1];
8            }
9        }
10        return profit;
11    }
12};