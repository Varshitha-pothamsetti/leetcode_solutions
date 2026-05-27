// Last updated: 27/05/2026, 21:15:42
1class Solution {
2public:
3    int distributeCandies(int n, int limit) {
4        int ans = 0;
5        for(int i = 0; i <= limit; i++){
6            for(int j = 0; j <= limit; j++){
7                int k = n - i - j;
8                if(k >= 0 && k <= limit){
9                    ans++;
10                }
11            }
12        }
13        return ans;
14    }
15};