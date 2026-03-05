// Last updated: 05/03/2026, 10:31:56
1class Solution {
2public:
3    int subarraySum(vector<int>& nums, int k) {
4        int count = 0;
5        int prefix = 0;
6        unordered_map<int, int> map;
7        map[0]++;
8
9        for(int num : nums){
10            prefix += num;
11            int need = prefix - k;
12            if(map.find(need) != map.end()){
13                count += map[need];
14            }
15            map[prefix]++;
16        }  
17        return count;
18    }
19};