// Last updated: 05/03/2026, 10:29:52
1#include <bits/stdc++.h>
2using namespace std;
3
4class Solution {
5public:
6    vector<int> leftRightDifference(vector<int>& nums) {
7        int n = nums.size();
8        vector<long long> leftSum(n, 0), rightSum(n, 0);
9        vector<long long> answer(n, 0);
10
11        for (int i = 1; i < n; ++i) {
12            leftSum[i] = leftSum[i - 1] + nums[i - 1];
13        }
14
15        for (int i = n - 2; i >= 0; --i) {
16            rightSum[i] = rightSum[i + 1] + nums[i + 1];
17        }
18        for (int i = 0; i < n; ++i) {
19            answer[i] = llabs(leftSum[i] - rightSum[i]);
20        }
21        vector<int> out(n);
22        for (int i = 0; i < n; ++i) out[i] = static_cast<int>(answer[i]);
23        return out;
24    }
25};
26