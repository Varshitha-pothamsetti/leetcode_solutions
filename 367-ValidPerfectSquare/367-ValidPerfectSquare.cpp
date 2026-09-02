// Last updated: 02/09/2026, 20:43:06
1class Solution {
2public:
3    bool isPerfectSquare(int num) {
4        long long low = 1, high = num;
5        while(low <= high){
6            long long mid = low + (high - low) / 2;
7            long long square = mid * mid;
8            if(square == num)
9               return true;
10            if(square < num)
11               low = mid + 1;
12            else
13               high = mid - 1;
14        }
15        return false;
16    }
17};