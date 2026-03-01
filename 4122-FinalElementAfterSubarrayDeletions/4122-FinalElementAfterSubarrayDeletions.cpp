// Last updated: 01/03/2026, 20:18:56
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