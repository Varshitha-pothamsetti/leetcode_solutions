// Last updated: 09/09/2026, 21:24:14
class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        int winner = 0;
        int win = 0;
        for(int i = 1; i < skills.size(); i++){
            if(skills[winner] > skills[i]){
                win++;
            }
            else{
                winner = i;
                win = 1;
            }
            if(win == k)
                return winner;
        }
        return winner;
    }
};