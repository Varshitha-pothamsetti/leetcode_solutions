// Last updated: 01/03/2026, 20:18:53
class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        unordered_map<int,int>freqcount;
        for(auto &p:freq){
            freqcount[p.second]++;
        }
        for(int num:nums){
            if(freqcount[freq[num]]==1){
                return num;
            }
        }
        return -1;
    }
};