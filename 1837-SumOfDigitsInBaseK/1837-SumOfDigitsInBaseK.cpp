// Last updated: 09/09/2026, 21:28:20
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