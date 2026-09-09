// Last updated: 09/09/2026, 21:24:08
class Solution {
public:
    int minimumChairs(string s) {
        int current = 0;
        int maxchairs = 0;
        for(char ch : s){
            if(ch == 'E'){
                current++;
                maxchairs = max(maxchairs , current);
            }
            else{
                current--;
            }
        }
        return maxchairs;
    }
};