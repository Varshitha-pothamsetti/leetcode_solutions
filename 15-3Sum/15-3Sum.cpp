// Last updated: 07/05/2026, 12:16:53
1// class Solution {
2// public:
3//     vector<vector<int>> threeSum(vector<int>& nums) {
4//         sort(nums.begin(), nums.end());
5//         vector<vector<int>> ans;
6//         for(int i = 0; i < nums.size(); i++){
7//             if(i > 0 && nums[i] == nums[i - 1]){
8//                 continue;
9//             }
10//         int left = i + 1;
11//         int right = nums.size() - 1;
12//         while(left < right){
13//             int sum = nums[i] + nums[right] + nums[left];
14//             if(sum == 0){
15//                 ans.push_back({nums[i], nums[left], nums[right]});
16//                 left++;
17//                 right--;
18//             }
19//             else if(sum < 0){
20//                 left++;
21//             }
22//             else {
23//                 right--;
24//             }
25//           }
26//         }
27//         return ans;
28//     }
29// };
30
31
32class Solution {
33public:
34    vector<vector<int>> threeSum(vector<int>& nums) {
35        sort(nums.begin(), nums.end());
36        vector<vector<int>> ans;
37        for(int i = 0; i < nums.size(); i++) {
38            if(i > 0 && nums[i] == nums[i - 1]) {
39                continue;
40            }
41            int left = i + 1;
42            int right = nums.size() - 1;
43            while(left < right) {
44                int sum = nums[i] + nums[left] + nums[right];
45                if(sum == 0) {
46                    ans.push_back({nums[i], nums[left], nums[right]});
47                    left++;
48                    right--;
49                    while(left < right && nums[left] == nums[left - 1]) {
50                        left++;
51                    }
52                    while(left < right && nums[right] == nums[right + 1]) {
53                        right--;
54                    }
55                }
56                else if(sum < 0) {
57                    left++;
58                }
59                else {
60                    right--;
61                }
62            }
63        }
64        return ans;
65    }
66};