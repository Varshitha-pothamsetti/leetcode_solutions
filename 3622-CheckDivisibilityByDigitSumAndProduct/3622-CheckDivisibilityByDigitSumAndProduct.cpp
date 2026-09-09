// Last updated: 09/09/2026, 21:22:52
class Solution {
public:
    bool checkDivisibility(int n) {
        int temp = n;
        int digitsum = 0;
        int digitproduct = 1;
        while(temp > 0){
            int digit = temp % 10;
            digitsum += digit;
            digitproduct *= digit;
            temp /= 10;
        }
        int total = digitsum + digitproduct;
        return n % total == 0;
    }
};