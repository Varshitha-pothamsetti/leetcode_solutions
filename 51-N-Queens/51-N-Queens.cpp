// Last updated: 27/02/2026, 20:00:51
1class Solution {
2public:
3    bool isValid(int row, int col, vector<string>& grid, int n){
4        int r = row - 1;
5        // Check column
6        while(r >= 0){
7            if(grid[r][col] == 'Q') return false;
8            r--;
9        }
10        // Check right diagonal
11        r = row - 1;
12        int c = col + 1;
13        while(r >= 0 && c < n){
14            if(grid[r][c] == 'Q') return false;
15            r--;
16            c++;
17        }
18        // Check left diagonal
19        r = row - 1;
20        c = col - 1;
21        while(r >= 0 && c >= 0){
22            if(grid[r][c] == 'Q') return false;
23            r--;
24            c--;
25        }
26        return true;
27    }
28    void Arrange(int row, vector<string>& grid, int n,
29                 vector<vector<string>>& ans){
30        if(row == n){
31            ans.push_back(grid);
32            return;
33        }
34        for(int col = 0; col < n; col++){
35            if(isValid(row, col, grid, n)){
36                grid[row][col] = 'Q';
37                Arrange(row + 1, grid, n, ans);
38                grid[row][col] = '.';   // backtrack
39            }
40        }
41    }
42    vector<vector<string>> solveNQueens(int n) {
43        vector<vector<string>> ans;
44        vector<string> grid(n, string(n, '.'));
45        Arrange(0, grid, n, ans);
46        return ans;
47    }
48};