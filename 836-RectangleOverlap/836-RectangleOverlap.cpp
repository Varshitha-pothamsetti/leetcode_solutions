// Last updated: 14/09/2026, 19:44:32
1class Solution {
2public:
3    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
4        return rec1[0] < rec2[2] &&
5               rec1[2] > rec2[0] &&
6               rec1[1] < rec2[3] &&
7               rec1[3] > rec2[1];     
8    }
9};