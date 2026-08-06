// Last updated: 06/08/2026, 21:01:26
1class Solution {
2public:
3    int trap(vector<int>& height) {
4        int l = 0, r = height.size() - 1;
5        int leftMax = 0, rightMax = 0;
6        int water = 0;
7
8        while (l < r) {
9            if (height[l] <= height[r]) {
10                if (height[l] >= leftMax)
11                    leftMax = height[l];
12                else
13                    water += leftMax - height[l];
14                l++;
15            } else {
16                if (height[r] >= rightMax)
17                    rightMax = height[r];
18                else
19                    water += rightMax - height[r];
20                r--;
21            }
22        }
23        return water;
24    }
25};