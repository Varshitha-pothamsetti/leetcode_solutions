// Last updated: 01/03/2026, 20:19:37
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<long long> leftSum(n, 0), rightSum(n, 0);
        vector<long long> answer(n, 0);

        for (int i = 1; i < n; ++i) {
            leftSum[i] = leftSum[i - 1] + nums[i - 1];
        }

        for (int i = n - 2; i >= 0; --i) {
            rightSum[i] = rightSum[i + 1] + nums[i + 1];
        }
        for (int i = 0; i < n; ++i) {
            answer[i] = llabs(leftSum[i] - rightSum[i]);
        }
        vector<int> out(n);
        for (int i = 0; i < n; ++i) out[i] = static_cast<int>(answer[i]);
        return out;
    }
};
