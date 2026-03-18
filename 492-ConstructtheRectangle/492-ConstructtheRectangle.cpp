// Last updated: 18/03/2026, 21:20:54
1class Solution {
2public:
3    vector<int> constructRectangle(int area) {
4        int w = sqrt(area);
5        while(area % w != 0){
6            w--;
7        }
8        int l = area/w;
9        return {l, w};
10    }
11};