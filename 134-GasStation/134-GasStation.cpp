// Last updated: 01/03/2026, 20:22:47
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int tank = 0;
        int total = 0;
        int start = 0;

        for(int i = 0; i < gas.size(); i++){
            int difference = gas[i] - cost[i];
            tank += difference;
            total += difference;

             if(tank < 0){
                start = i + 1;
                tank = 0;
             }      
        }
        if(total >= 0)
            return start;
        else
            return -1;
    }
};