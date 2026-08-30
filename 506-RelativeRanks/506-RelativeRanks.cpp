// Last updated: 30/08/2026, 13:48:06
1class Solution {
2public:
3    vector<string> findRelativeRanks(vector<int>& score) {
4        int n = score.size();
5        vector<pair<int, int>> athletes;
6        for(int i = 0; i < n; i++){
7            athletes.push_back({score[i], i});
8        }
9        sort(athletes.begin(), athletes.end(), greater<pair<int, int>>());
10        vector<string> answer(n);
11        for(int i = 0; i < n; i++){
12            int index = athletes[i].second;
13            if(i == 0)
14               answer[index] = "Gold Medal";
15            else if(i == 1)
16               answer[index] = "Silver Medal";
17            else if(i == 2)
18               answer[index] = "Bronze Medal";
19            else
20               answer[index] = to_string(i + 1);
21        }
22        return answer;
23    }
24};