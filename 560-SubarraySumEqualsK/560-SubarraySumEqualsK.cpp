// Last updated: 01/03/2026, 20:21:45
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int prefix = 0;
        unordered_map<int, int> map;
        map[0]++;

        for(int num : nums){
            prefix += num;
            int need = prefix - k;
            if(map.find(need) != map.end()){
                count += map[need];
            }
            map[prefix]++;
        }  
        return count;
    }
};