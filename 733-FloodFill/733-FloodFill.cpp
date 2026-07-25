// Last updated: 25/07/2026, 21:04:43
1class Solution {
2public:
3    void dfs(vector<vector<int>>& image, int r, int c, int oldColor, int newColor) {
4        int m = image.size();
5        int n = image[0].size();
6
7        if (r < 0 || c < 0 || r >= m || c >= n)
8            return;
9
10        if (image[r][c] != oldColor)
11            return;
12
13        image[r][c] = newColor;
14
15        dfs(image, r + 1, c, oldColor, newColor);
16        dfs(image, r - 1, c, oldColor, newColor);
17        dfs(image, r, c + 1, oldColor, newColor);
18        dfs(image, r, c - 1, oldColor, newColor);
19    }
20
21    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
22        int oldColor = image[sr][sc];
23
24        if (oldColor == color)
25            return image;
26
27        dfs(image, sr, sc, oldColor, color);
28
29        return image;
30    }
31};