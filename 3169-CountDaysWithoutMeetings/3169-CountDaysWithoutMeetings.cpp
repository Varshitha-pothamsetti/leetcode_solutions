// Last updated: 06/05/2026, 16:20:34
1class Solution {
2public:
3    int countDays(int days, vector<vector<int>>& meetings) {
4        sort(meetings.begin(), meetings.end());
5        int busy = 0;
6        int start = meetings[0][0];
7        int end = meetings[0][1];
8        for(int i = 1; i < meetings.size(); i++){
9            if(meetings[i][0] <= end){
10                end = max(end, meetings[i][1]);
11            }
12            else{
13                busy += (end - start + 1);
14                start = meetings[i][0];
15                end = meetings[i][1];
16            }
17        }
18        busy += (end - start + 1);
19        return days - busy;
20    }
21};