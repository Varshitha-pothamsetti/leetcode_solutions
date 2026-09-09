// Last updated: 09/09/2026, 21:22:50
class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int result = 0;
        bool hasEven = false;
        for (int num : nums) {
            if (num % 2 == 0) {      
                result |= num;       
                hasEven = true;
            }
        }
        return hasEven ? result : 0; 
    }
};
