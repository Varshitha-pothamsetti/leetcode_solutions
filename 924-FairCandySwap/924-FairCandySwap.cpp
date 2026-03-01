// Last updated: 01/03/2026, 20:21:10
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        
        int suma = 0, sumb = 0;

        for(int a : aliceSizes)
            suma += a; 
        
        for(int b : bobSizes)
            sumb += b;
            
        int diff = (suma - sumb) / 2;

        unordered_set<int> bobSet(bobSizes.begin(), bobSizes.end());

        for(int x : aliceSizes){
            int target = x - diff;

            if(bobSet.count(target)){
                return {x, target};
            }
        }

        return {}; 
    }
};