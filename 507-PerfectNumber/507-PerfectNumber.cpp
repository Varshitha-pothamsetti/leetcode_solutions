// Last updated: 01/03/2026, 20:21:54
class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0;
        for(int i = 1; i <= num/2 ; i++){
            if(num % i == 0){
                sum += i;
            }
        }
        return sum == num;
    }
};