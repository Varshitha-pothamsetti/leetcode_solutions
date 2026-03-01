// Last updated: 01/03/2026, 20:20:42
class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<int> row(3, 0);
        vector<int> col(3, 0);
        int diag = 0;
        int antidiag = 0;
        for(int i = 0; i < moves.size(); i++){
            int player = (i % 2 == 0) ? 1: -1;
            
            int r = moves[i][0];
            int c = moves[i][1];

            row[r] += player;
            col[c] += player;

            if(r == c)
                diag += player;
            if(r + c == 2)
                antidiag += player;

                if(abs(row[r]) == 3 || abs(col[c]) == 3 || abs(diag) == 3 || abs(antidiag) == 3){
                    return player == 1 ? "A" : "B";
            }
        }
        
                    if(moves.size() == 9)
                        return "Draw";

                        return "Pending";
    }
};