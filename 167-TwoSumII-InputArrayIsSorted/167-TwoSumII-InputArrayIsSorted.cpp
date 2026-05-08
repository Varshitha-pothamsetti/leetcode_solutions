// Last updated: 08/05/2026, 11:01:09
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4        int left = 0;
5        int right = numbers.size() - 1;
6        while(left < right){
7            int sum = numbers[left] + numbers[right];
8            if(sum == target){
9                return {left + 1, right + 1};
10            }
11            else if(sum > target){
12                right--;
13            }
14            else{
15                left++;
16            }
17        }
18        return {};
19    }
20};