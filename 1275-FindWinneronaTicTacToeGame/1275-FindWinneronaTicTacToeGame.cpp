// Last updated: 01/03/2026, 20:17:10
1class Solution {
2public:
3    string tictactoe(vector<vector<int>>& moves) {
4        vector<int> row(3, 0);
5        vector<int> col(3, 0);
6        int diag = 0;
7        int antidiag = 0;
8        for(int i = 0; i < moves.size(); i++){
9            int player = (i % 2 == 0) ? 1: -1;
10            
11            int r = moves[i][0];
12            int c = moves[i][1];
13
14            row[r] += player;
15            col[c] += player;
16
17            if(r == c)
18                diag += player;
19            if(r + c == 2)
20                antidiag += player;
21
22                if(abs(row[r]) == 3 || abs(col[c]) == 3 || abs(diag) == 3 || abs(antidiag) == 3){
23                    return player == 1 ? "A" : "B";
24            }
25        }
26        
27                    if(moves.size() == 9)
28                        return "Draw";
29
30                        return "Pending";
31    }
32};