// Last updated: 25/06/2026, 20:33:55
1class Solution {
2public:
3    int isWinner(vector<int>& player1, vector<int>& player2) {
4        int score1 = 0, score2 = 0;
5        int n = player1.size();
6
7        for (int i = 0; i < n; i++) {
8            if ((i >= 1 && player1[i - 1] == 10) || (i >= 2 && player1[i - 2] == 10))
9                score1 += 2 * player1[i];
10            else
11                score1 += player1[i];
12
13            if ((i >= 1 && player2[i - 1] == 10) || (i >= 2 && player2[i - 2] == 10))
14                score2 += 2 * player2[i];
15            else
16                score2 += player2[i];
17        }
18
19        if (score1 > score2)
20            return 1;
21        else if (score2 > score1)
22            return 2;
23        else
24            return 0;
25    }
26};