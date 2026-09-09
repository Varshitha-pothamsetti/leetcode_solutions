// Last updated: 09/09/2026, 21:22:16
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