// Last updated: 16/10/2026, 19:45:59
1class Solution {
2public:
3    string destCity(vector<vector<string>>& paths) {
4        for(auto p : paths){
5            bool found = false;
6            for(auto q : paths){
7                if(p[1] == q[0]){
8                    found = true;
9                    break;
10                }
11            }
12            if(!found){
13                return p[1];
14            }
15        }
16        return "";
17    }
18};