// Last updated: 13/08/2026, 21:34:08
1class Solution {
2public:
3    int mySqrt(int x) {
4        long long low = 0, high = x;
5        long long ans = 0;
6        while (low <= high) {
7            long long mid = low + (high - low) / 2;
8            if (mid * mid <= x) {
9                ans = mid;
10                low = mid + 1;
11            }
12            else {
13                high = mid - 1;
14            }
15        }
16        return ans;
17    }
18};