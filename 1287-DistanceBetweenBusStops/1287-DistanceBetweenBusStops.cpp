// Last updated: 13/05/2026, 21:16:51
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if(start > destination){
            swap(start, destination);
        }
            int totaldistance = 0;
            int pathdistance = 0;

            for(int i = 0; i < distance.size(); i++){
                totaldistance += distance[i];

                if(i >=start && i < destination){
                    pathdistance += distance[i];
                }
            }
            return min(pathdistance, totaldistance - pathdistance);
    }
};