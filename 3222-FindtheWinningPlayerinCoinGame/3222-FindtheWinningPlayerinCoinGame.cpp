// Last updated: 25/06/2026, 20:30:48
1class Solution {
2public:
3    string winningPlayer(int x, int y) {
4        int moves = min(x, y / 4);
5        if(moves % 2 != 0){
6            return "Alice";
7        }
8        else{
9            return "Bob";
10        }
11    }
12};