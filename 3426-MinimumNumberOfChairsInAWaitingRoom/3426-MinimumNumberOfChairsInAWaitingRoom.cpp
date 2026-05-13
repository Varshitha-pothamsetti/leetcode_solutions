// Last updated: 13/05/2026, 21:15:03
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