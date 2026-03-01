// Last updated: 01/03/2026, 20:19:20
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int mx = *max_element(nums.begin(), nums.end());
        long long ans = 0;
        int countMax = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] == mx)
                countMax++;

            while (countMax >= k) {
                ans += nums.size() - right;
                if (nums[left] == mx)
                    countMax--;
                left++;
            }
        }
        return ans;
    }
};
