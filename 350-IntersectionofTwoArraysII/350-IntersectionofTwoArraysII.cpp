// Last updated: 10/06/2026, 19:55:30
1class Solution {
2public:
3    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
4        unordered_map<int, int> freq;
5        for(int num : nums1){
6            freq[num]++;
7        }
8        vector<int> ans;
9        for(int num : nums2){
10            if(freq[num] > 0){
11                ans.push_back(num);
12                freq[num]--;
13            }
14        }
15        return ans;
16    }
17};