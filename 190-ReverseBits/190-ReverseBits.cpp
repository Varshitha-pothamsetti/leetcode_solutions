// Last updated: 29/05/2026, 12:56:24
1class Solution {
2public:
3    int reverse(int x) {
4        int rev = 0;
5        while(x != 0){
6            int digit = x % 10;
7            x /= 10;
8            if(rev > INT_MAX / 10 || 
9            (rev == INT_MAX / 10 && digit > 7))
10              return 0;
11
12            if(rev < INT_MIN / 10 || 
13            (rev == INT_MIN / 10 && digit < -8))
14             return 0;
15            
16            rev = rev * 10 + digit;
17        }
18        return rev;
19    }
20};