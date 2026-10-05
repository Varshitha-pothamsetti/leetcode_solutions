// Last updated: 05/10/2026, 19:36:58
1class Solution {
2public:
3    int findContentChildren(vector<int>& g, vector<int>& s) {
4        sort(g.begin(), g.end());
5        sort(s.begin(), s.end());
6        int child_ptr = 0;
7        int cookie_ptr = 0;
8        while(child_ptr < g.size() && cookie_ptr < s.size()){
9            if(s[cookie_ptr] >= g[child_ptr]){
10                child_ptr++;
11            }
12            cookie_ptr++;
13        }
14        return child_ptr;
15    }
16};