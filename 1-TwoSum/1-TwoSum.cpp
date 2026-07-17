// Last updated: 17/07/2026, 21:56:51
1// int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
2//     int* result = (int*)malloc(2 * sizeof(int));
3//     *returnSize = 2;
4    
5//     for (int i = 0; i < numsSize; i++) {
6//         for (int j = i + 1; j < numsSize; j++) {
7//             if (nums[i] + nums[j] == target) {
8//                 result[0] = i;
9//                 result[1] = j;
10//                 return result;
11//             }
12//         }
13//     }
14    
15//     result[0] = 0;
16//     result[1] = 1;
17//     return result;
18// }
19class Solution {
20public:
21    vector<int> twoSum(vector<int>& nums, int target) {
22        for (int i = 0; i < nums.size(); i++) {
23            for (int j = i + 1; j < nums.size(); j++) {
24                if (nums[i] + nums[j] == target) {
25                    return {i, j};
26                }
27            }
28        }
29        return {};
30    }
31};