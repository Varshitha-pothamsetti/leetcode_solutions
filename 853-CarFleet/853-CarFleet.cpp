// Last updated: 11/08/2026, 11:39:37
1class Solution {
2public:
3    int carFleet(int target, vector<int>& position, vector<int>& speed) {
4        vector<pair<int, double>> cars;
5        for(int i = 0;i < position.size(); i++){
6            double time = (double)(target - position[i]) / speed[i];
7            cars.push_back({position[i], time});
8        }
9        sort(cars.rbegin(), cars.rend());
10        int fleets = 0;
11        double maxTime = 0;
12        for(auto car : cars){
13            double time = car.second;
14            if(time > maxTime){
15                fleets++;
16                maxTime = time;
17            }
18        }
19        return fleets;
20    }
21};