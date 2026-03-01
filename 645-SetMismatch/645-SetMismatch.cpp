// Last updated: 01/03/2026, 20:21:23
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int duplicate = -1;
        vector<int> freq(n + 1, 0);
        long long actual_sum = 0;
        for(int x : nums){
            actual_sum += x;
            freq[x]++;
            if(freq[x] == 2) duplicate = x;
        }
        long long expected_sum =  1LL * n * (n + 1)/ 2;
        int missing = duplicate + (expected_sum - actual_sum);

        return {duplicate, static_cast<int>(missing)};
    }
};