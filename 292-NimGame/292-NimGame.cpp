// Last updated: 01/03/2026, 20:22:08
class Solution {
public:
    bool canWinNim(int n) {
        if(n % 4 == 0){
            return false;
        }
        else{
            return true;
        }
    }
};