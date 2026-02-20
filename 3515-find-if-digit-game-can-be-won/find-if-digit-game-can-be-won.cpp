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