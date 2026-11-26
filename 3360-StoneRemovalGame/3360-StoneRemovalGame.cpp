// Last updated: 26/11/2026, 21:28:22
1class Solution {
2public:
3    bool canAliceWin(int n) {
4        int currentmove = 10;
5        bool aliceTurn = true;
6
7        while(n >= currentmove){
8            n = n - currentmove;
9            currentmove--;
10            aliceTurn = !aliceTurn;
11        }
12        return !aliceTurn;
13    }
14};