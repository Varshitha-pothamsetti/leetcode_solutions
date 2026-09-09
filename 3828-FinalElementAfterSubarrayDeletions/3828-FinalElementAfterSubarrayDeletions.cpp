// Last updated: 09/09/2026, 21:22:38
class Solution {
public:
    int finalElement(vector<int>& nums) {
        vector<int> kalumexora = nums;
        int n = kalumexora.size();
        if (n == 1)
            return kalumexora[0];
        return max(kalumexora[0], kalumexora[n - 1]);
    }
};