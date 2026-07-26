// Last updated: 26/07/2026, 21:00:58
1
2class Solution {
3public:
4    int arrangeCoins(int n) {
5        return (int) ((sqrt(1 + 8.0 * n) - 1) / 2);
6    }
7};