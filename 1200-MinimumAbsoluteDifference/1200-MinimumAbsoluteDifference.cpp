// Last updated: 27/08/2026, 19:50:09
1class Solution {
2public:
3    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
4        sort(arr.begin(), arr.end());
5
6        int minDiff = INT_MAX;
7        for (int i = 1; i < arr.size(); i++) {
8            minDiff = min(minDiff, arr[i] - arr[i - 1]);
9        }
10
11        vector<vector<int>> result;
12        for (int i = 1; i < arr.size(); i++) {
13            if (arr[i] - arr[i - 1] == minDiff) {
14                result.push_back({arr[i - 1], arr[i]});
15            }
16        }
17
18        return result;
19    }
20};
21