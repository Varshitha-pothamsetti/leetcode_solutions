// Last updated: 13/03/2026, 20:58:38
1class Solution {
2public:
3    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
4        if(start > destination){
5            swap(start, destination);
6        }
7            int totaldistance = 0;
8            int pathdistance = 0;
9
10            for(int i = 0; i < distance.size(); i++){
11                totaldistance += distance[i];
12
13                if(i >=start && i < destination){
14                    pathdistance += distance[i];
15                }
16            }
17            return min(pathdistance, totaldistance - pathdistance);
18    }
19};