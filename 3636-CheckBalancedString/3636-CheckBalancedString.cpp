// Last updated: 01/03/2026, 20:19:04
class Solution {
public:
    bool isBalanced(string num) {
       int evenSum = 0;
       int oddSum = 0;
        for (size_t i = 0; i < num.length(); ++i) {
            int digit = num[i] - '0';
            if(i % 2 == 0){
                evenSum += digit;
            }
            else{
                oddSum += digit;
            }
        }
        return evenSum == oddSum;
    }
};