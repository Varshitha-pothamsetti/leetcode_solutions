// Last updated: 05/05/2026, 21:51:43
1#include <bits/stdc++.h>
2using namespace std;
3
4class Solution {
5public:
6    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
7        deque<int> dq;
8        vector<int> result;
9
10        for (int i = 0; i < nums.size(); i++) {
11            if (!dq.empty() && dq.front() == i - k)
12                dq.pop_front();
13            while (!dq.empty() && nums[dq.back()] < nums[i])
14                dq.pop_back();
15            dq.push_back(i);
16            if (i >= k - 1)
17                result.push_back(nums[dq.front()]);
18        }
19
20        return result;
21    }
22};
23