class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int singlesum = 0;
        int doublesum = 0;

        for(int num : nums){
            if(num < 10){
                singlesum += num;
            }
            else{
                doublesum += num;
            }
        }
        return singlesum != doublesum;
    }
};