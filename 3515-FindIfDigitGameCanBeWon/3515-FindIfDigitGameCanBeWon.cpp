// Last updated: 01/03/2026, 20:19:13
class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singlenum = 0;
        int doublenum = 0;

        for(int num : nums){
            if(num < 10){
                singlenum += num;
            }
            else{
                doublenum += num;
            }
        }
        return singlenum != doublenum;
    }
};