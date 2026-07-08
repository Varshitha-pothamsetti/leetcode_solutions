// Last updated: 08/07/2026, 21:16:21
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

    void Arrange(int row, vector<string>& grid, int n, int &count){
        if(row == n){
            count++;
            return;
        }

        for(int col = 0; col < n; col++){
            if(isValid(row, col, grid, n)){
                grid[row][col] = 'Q';
                Arrange(row + 1, grid, n, count);
                grid[row][col] = '.';   // backtrack
            }
        }
    }

    int totalNQueens(int n) {
        int count = 0;
        vector<string> grid(n, string(n, '.'));
        Arrange(0, grid, n, count);
        return count;
    }
};