// Last updated: 09/09/2026, 21:23:17
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