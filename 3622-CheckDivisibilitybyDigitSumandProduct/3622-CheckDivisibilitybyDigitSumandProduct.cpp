// Last updated: 22/08/2026, 19:25:01
1class Solution {
2public:
3    bool checkDivisibility(int n) {
4        int temp = n;
5        int digitsum = 0;
6        int digitproduct = 1;
7        while(temp > 0){
8            int digit = temp % 10;
9            digitsum += digit;
10            digitproduct *= digit;
11            temp /= 10;
12        }
13        int total = digitsum + digitproduct;
14        return n % total == 0;
15    }
16};