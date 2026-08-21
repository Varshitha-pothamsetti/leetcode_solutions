// Last updated: 21/08/2026, 20:16:15
1class Solution {
2public:
3    int findWinningPlayer(vector<int>& skills, int k) {
4        int winner = 0;
5        int win = 0;
6        for(int i = 1; i < skills.size(); i++){
7            if(skills[winner] > skills[i]){
8                win++;
9            }
10            else{
11                winner = i;
12                win = 1;
13            }
14            if(win == k)
15                return winner;
16        }
17        return winner;
18    }
19};