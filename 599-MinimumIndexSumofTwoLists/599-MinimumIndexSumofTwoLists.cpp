// Last updated: 07/10/2026, 21:04:23
1class Solution {
2public:
3    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
4        unordered_map<string, int> mp;
5        
6        for (int i = 0; i < list1.size(); i++) {
7            mp[list1[i]] = i;
8        }
9        vector<string> ans;
10        int minSum = INT_MAX;
11        for (int j = 0; j < list2.size(); j++) {
12            if (mp.find(list2[j]) != mp.end()) {
13                int sum = mp[list2[j]] + j;
14                if (sum < minSum) {
15                    minSum = sum;
16                    ans.clear();
17                    ans.push_back(list2[j]);
18                }
19                else if (sum == minSum) {
20                    ans.push_back(list2[j]);
21                }
22            }
23        }
24        
25        return ans;
26    }
27};