// Last updated: 08/03/2026, 20:26:55
1class Solution {
2public:
3    vector<vector<int>> generate(int numRows) {
4       vector<vector<int>> triangle;
5        for(int i = 0; i < numRows; i++){
6            vector<int> row;
7            for(int j = 0; j <= i; j++){
8                if(j == 0 || j == i){
9                    row.push_back(1);
10                }
11                else{
12                    row.push_back(triangle[i-1][j-1] + triangle[i-1][j]);
13                }
14            }
15            triangle.push_back(row);
16        }
17        return triangle;
18    }
19};