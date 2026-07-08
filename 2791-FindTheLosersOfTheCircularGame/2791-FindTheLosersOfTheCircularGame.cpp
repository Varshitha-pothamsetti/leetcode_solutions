// Last updated: 08/07/2026, 21:11:05
class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<bool> received(n, false);
        int current_friend = 0;
        int turn = 1;
        while(!received[current_friend]){
            received[current_friend] = true;
            current_friend = (current_friend + turn * k) % n;
            turn++;
        }
        vector<int> losers;
        for(int i = 0; i < n; i++){
            if(!received[i]){
                losers.push_back(i + 1);
            }
        }
        return losers;
    }
};