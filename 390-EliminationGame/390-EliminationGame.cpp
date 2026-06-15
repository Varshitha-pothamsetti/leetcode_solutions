// Last updated: 15/06/2026, 20:44:57
1class Solution {
2public:
3    int lastRemaining(int n) {
4        long long head = 1;
5        long long step = 1;
6        long long remaining = n;
7        long long lefttoright = true;
8
9        while(remaining > 1){
10            if(lefttoright || (remaining % 2 == 1)){
11                head += step;
12            }
13            remaining /= 2;
14            step *= 2;
15            lefttoright = !lefttoright;
16        }
17        return (int)head;
18
19    }
20};