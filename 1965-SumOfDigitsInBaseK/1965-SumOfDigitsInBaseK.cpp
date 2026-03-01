// Last updated: 01/03/2026, 20:20:04
class Solution {
public:
    int sumBase(int n, int k) {
        int sum = 0;
        while(n > 0) {
            sum += n % k;
            n /= k;
        }
        return sum;
    }
};