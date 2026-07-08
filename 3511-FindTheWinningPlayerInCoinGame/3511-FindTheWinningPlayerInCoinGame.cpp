// Last updated: 08/07/2026, 21:10:43
class Solution {
public:
    string winningPlayer(int x, int y) {
        int moves = min(x, y / 4);
        if(moves % 2 != 0){
            return "Alice";
        }
        else{
            return "Bob";
        }
    }
};