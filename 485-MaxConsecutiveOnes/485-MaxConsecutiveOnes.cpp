// Last updated: 10/11/2026, 10:02:40
1class Solution {
2public:
3    int findMaxConsecutiveOnes(vector<int>& nums) {
4        int count = 0;
5        int maxCount = 0;
6        for(int i = 0; i < nums.size(); i++){
7            if(nums[i] == 1){
8                count++;
9            }
10            else{
11                count = 0;
12            }
13            maxCount = max(maxCount, count);
14        }
15        return maxCount;
16    }
17};