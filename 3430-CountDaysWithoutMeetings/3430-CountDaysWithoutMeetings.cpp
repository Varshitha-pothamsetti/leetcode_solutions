// Last updated: 13/05/2026, 21:15:05
class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(), meetings.end());
        int busy = 0;
        int start = meetings[0][0];
        int end = meetings[0][1];
        for(int i = 1; i < meetings.size(); i++){
            if(meetings[i][0] <= end){
                end = max(end, meetings[i][1]);
            }
            else{
                busy += (end - start + 1);
                start = meetings[i][0];
                end = meetings[i][1];
            }
        }
        busy += (end - start + 1);
        return days - busy;
    }
};