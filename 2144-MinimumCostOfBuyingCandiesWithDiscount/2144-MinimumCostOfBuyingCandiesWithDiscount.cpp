// Last updated: 09/09/2026, 21:27:29
class Solution {
public:
    int minimumCost(vector<int>& cost) {
     sort(cost.begin(), cost.end(), greater<int>());
     int ans = 0;
     for(int i = 0; i < cost.size(); i++){
        if(i % 3 != 2)
            ans += cost[i];
       }
       return ans;   
    }
};