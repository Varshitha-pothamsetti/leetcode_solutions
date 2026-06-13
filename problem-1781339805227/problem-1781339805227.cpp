// Last updated: 13/06/2026, 14:06:45
1class Solution {
2public:
3    double myPow(double x, int n) {
4        long long power = n;
5        if(power < 0){
6            x = 1.0 / x;
7            power = -power;
8        }
9        double ans = 1.0;
10        while(power > 0){
11            if(power & 1)
12                ans *= x;
13                x *= x;
14                power >>= 1;
15        }
16        return ans;
17    }
18};