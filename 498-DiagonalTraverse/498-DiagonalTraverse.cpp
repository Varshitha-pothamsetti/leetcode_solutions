// Last updated: 01/03/2026, 20:21:47
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> ans;
        ans.reserve(m * n);
        for (int i = 0; i < m + n - 1; i++) {

            //even
            if (i % 2 == 0) {
                int row = min(i, m - 1);   
                int col = i - row;        
                while (row >= 0 && col < n) {
                    ans.push_back(mat[row][col]);
                    row--;
                    col++;
                }
            } 

            // odd
            else {
                int col = min(i, n - 1);  
                int row = i - col;         
                while (col >= 0 && row < m) {
                    ans.push_back(mat[row][col]);
                    row++;
                    col--;
                }
            }
        }

        return ans;
    }
};
