// Last updated: 08/07/2026, 21:11:25
class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int score1 = 0, score2 = 0;
        int n = player1.size();

        for (int i = 0; i < n; i++) {
            if ((i >= 1 && player1[i - 1] == 10) || (i >= 2 && player1[i - 2] == 10))
                score1 += 2 * player1[i];
            else
                score1 += player1[i];

            if ((i >= 1 && player2[i - 1] == 10) || (i >= 2 && player2[i - 2] == 10))
                score2 += 2 * player2[i];
            else
                score2 += player2[i];
        }

        if (score1 > score2)
            return 1;
        else if (score2 > score1)
            return 2;
        else
            return 0;
    }
};