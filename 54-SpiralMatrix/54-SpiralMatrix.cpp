// Last updated: 01/03/2026, 20:23:07
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int left=0,top=0,right=m-1,bottom=n-1;
        vector<int> ans;

        // top
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
            }
            top++;

            // right
            for(int i=top;i<=bottom;i++){
                ans.push_back(matrix[i][right]);
            }
            right--;

            // bottom
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            // left
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                   ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};