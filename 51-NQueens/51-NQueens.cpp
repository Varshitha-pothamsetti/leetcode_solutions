// Last updated: 01/03/2026, 20:23:10
class Solution {
public:
    bool isValid(int row, int col, vector<string>& grid, int n){
        int r = row - 1;
        // Check column
        while(r >= 0){
            if(grid[r][col] == 'Q') return false;
            r--;
        }
        // Check right diagonal
        r = row - 1;
        int c = col + 1;
        while(r >= 0 && c < n){
            if(grid[r][c] == 'Q') return false;
            r--;
            c++;
        }
        // Check left diagonal
        r = row - 1;
        c = col - 1;
        while(r >= 0 && c >= 0){
            if(grid[r][c] == 'Q') return false;
            r--;
            c--;
        }
        return true;
    }
    void Arrange(int row, vector<string>& grid, int n,
                 vector<vector<string>>& ans){
        if(row == n){
            ans.push_back(grid);
            return;
        }
        for(int col = 0; col < n; col++){
            if(isValid(row, col, grid, n)){
                grid[row][col] = 'Q';
                Arrange(row + 1, grid, n, ans);
                grid[row][col] = '.';   // backtrack
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> grid(n, string(n, '.'));
        Arrange(0, grid, n, ans);
        return ans;
    }
};