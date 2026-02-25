class Solution {
public:
    bool canMeasureWater(int x, int y, int target) {
        if(target == 0)
            return true;
        if(target > x + y)
            return false;
            
        int g = gcd(x, y);
        return(target % g == 0);
    }
};