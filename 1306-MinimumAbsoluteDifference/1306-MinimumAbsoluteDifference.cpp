// Last updated: 01/03/2026, 20:20:47
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int minDiff = INT_MAX;
        for (int i = 1; i < arr.size(); i++) {
            minDiff = min(minDiff, arr[i] - arr[i - 1]);
        }

        vector<vector<int>> result;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - arr[i - 1] == minDiff) {
                result.push_back({arr[i - 1], arr[i]});
            }
        }

        return result;
    }
};
