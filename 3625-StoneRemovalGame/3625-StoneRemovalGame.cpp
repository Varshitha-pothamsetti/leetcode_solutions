// Last updated: 01/03/2026, 20:19:05
class Solution {
public:
    bool canAliceWin(int n) {
        int currentmove = 10;
        bool aliceTurn = true;

        while(n >= currentmove){
            n = n - currentmove;
            currentmove--;
            aliceTurn = !aliceTurn;
        }
        return !aliceTurn;
    }
};