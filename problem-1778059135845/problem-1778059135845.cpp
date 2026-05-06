// Last updated: 06/05/2026, 14:48:55
1class Solution {
2public:
3    int minimumChairs(string s) {
4        int current = 0;
5        int maxchairs = 0;
6        for(char ch : s){
7            if(ch == 'E'){
8                current++;
9                maxchairs = max(maxchairs , current);
10            }
11            else{
12                current--;
13            }
14        }
15        return maxchairs;
16    }
17};