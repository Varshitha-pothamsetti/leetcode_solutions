// Last updated: 03/03/2026, 21:34:07
1class Solution {
2public:
3    bool isValid(int row, int col, vector<string>& grid, int n){
4        int r = row - 1;
5
6        // Check column
7        while(r >= 0){
8            if(grid[r][col] == 'Q') return false;
9            r--;
10        }
11
12        // Check right diagonal
13        r = row - 1;
14        int c = col + 1;
15        while(r >= 0 && c < n){
16            if(grid[r][c] == 'Q') return false;
17            r--;
18            c++;
19        }
20
21        // Check left diagonal
22        r = row - 1;
23        c = col - 1;
24        while(r >= 0 && c >= 0){
25            if(grid[r][c] == 'Q') return false;
26            r--;
27            c--;
28        }
29
30        return true;
31    }
32
33    void Arrange(int row, vector<string>& grid, int n, int &count){
34        if(row == n){
35            count++;
36            return;
37        }
38
39        for(int col = 0; col < n; col++){
40            if(isValid(row, col, grid, n)){
41                grid[row][col] = 'Q';
42                Arrange(row + 1, grid, n, count);
43                grid[row][col] = '.';   // backtrack
44            }
45        }
46    }
47
48    int totalNQueens(int n) {
49        int count = 0;
50        vector<string> grid(n, string(n, '.'));
51        Arrange(0, grid, n, count);
52        return count;
53    }
54};