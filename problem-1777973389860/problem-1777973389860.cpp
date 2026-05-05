// Last updated: 05/05/2026, 14:59:49
1class Solution {
2public:
3    vector<int> findValidElements(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> leftmax(n), rightmax(n);
6        vector<int> result;
7        leftmax[0] = nums[0];
8        for(int i = 1; i < n; i++){
9            leftmax[i] = max(leftmax[i-1], nums[i]);
10        }
11        rightmax[n-1] = nums[n-1];
12        for(int i = n-2; i>=0; i--){
13            rightmax[i] = max(rightmax[i+1], nums[i]);
14        }
15        for(int i =0;i<n;i++){
16            if(i==0 || i == n-1 ||
17                nums[i] > leftmax[i-1] ||
18                nums[i] > rightmax[i+1]){
19                result.push_back(nums[i]);
20                }
21        }
22        return result;
23    }
24};