// Last updated: 01/03/2026, 20:20:15
class Solution {
public:
    int totalMoney(int n) {
        int weeks = n / 7;
        int extra_days = n % 7;
        int full_weeks_sum = 7 * weeks * (weeks + 1) / 2 + 21 * weeks;
        int remaining_days_sum = extra_days * (2 * weeks + extra_days + 1) / 2;
        return full_weeks_sum + remaining_days_sum;
    }
};
