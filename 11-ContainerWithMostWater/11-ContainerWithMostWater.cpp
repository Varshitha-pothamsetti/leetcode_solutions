// Last updated: 24/08/2026, 20:09:57
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int left = 0;
5        int right = height.size() - 1;
6        int maxWater = 0;
7        while (left < right) {
8            int width = right - left;
9            int h = min(height[left], height[right]);
10            maxWater = max(maxWater, width * h);
11            if (height[left] < height[right]) {
12                left++;
13            } else {
14                right--;
15            }
16        }
17        return maxWater;
18    }
19};