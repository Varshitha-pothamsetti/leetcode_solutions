// Last updated: 04/03/2026, 14:25:21
1class Solution {
2public:
3    bool isHappy(int n) {
4        if(n == 1)
5            return true;
6            int s = 0;
7            while(n > 1){
8                while(n > 0){
9                    int m = n % 10;
10                    s += m * m;
11                    n /= 10;
12                }
13                if(s == 1){
14                    return true;
15                }
16                n = s;
17                s = 0;
18                if(n == 4){
19                    return false;
20                }
21            }
22            return false;
23    }
24};