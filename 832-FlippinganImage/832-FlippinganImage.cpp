// Last updated: 15/09/2026, 20:28:24
1class Solution {
2public:
3    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
4        for(int i = 0; i < image.size(); i++){
5            reverse(image[i].begin(), image[i].end());
6            for(int j = 0; j < image.size(); j++){
7                image[i][j] = 1 - image[i][j];
8            }
9        }
10        return image;
11    }
12};