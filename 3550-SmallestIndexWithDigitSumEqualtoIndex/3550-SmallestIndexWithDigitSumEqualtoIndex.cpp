// Last updated: 24/09/2026, 19:09:36
1class Solution {
2public:
3    int smallestIndex(vector<int>& nums) {
4        for(int i = 0; i < nums.size(); i++){
5            int x = nums[i];
6            int sum = 0;
7            while(x > 0){
8                sum += x % 10;
9                x /= 10;
10            }
11            if(sum == i)
12                return i;
13            }
14            return -1;
15    }
16};