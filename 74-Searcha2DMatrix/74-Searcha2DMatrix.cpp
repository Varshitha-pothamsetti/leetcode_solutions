// Last updated: 14/08/2026, 10:07:31
1class Solution {
2public:
3    bool searchMatrix(vector<vector<int>>& matrix, int target) {
4        int m = matrix.size();
5        int n = matrix[0].size();
6        int low = 0;
7        int high = m * n - 1;
8        while(low <= high){
9            int mid = low + (high - low) / 2;
10            int row = mid / n;
11            int col = mid % n;
12            if(matrix[row][col] == target)
13                return true;
14            else if(matrix[row][col] < target)
15                low = mid + 1;
16            else
17                high = mid - 1;
18        }
19        return false;
20    }
21};