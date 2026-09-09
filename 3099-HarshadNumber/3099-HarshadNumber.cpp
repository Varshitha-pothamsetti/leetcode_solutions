// Last updated: 09/09/2026, 21:24:30
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int temp = x;
        while(temp > 0){
            sum += (temp % 10);
            temp /= 10;
        }
        if(x % sum == 0){
            return sum;
        }
        return -1;
    }
};