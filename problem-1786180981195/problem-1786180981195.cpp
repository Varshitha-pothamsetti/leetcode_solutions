// Last updated: 08/08/2026, 14:53:01
1class Solution {
2public:
3    vector<int> asteroidCollision(vector<int>& asteroids) {
4        vector<int> stack;
5        for(int x : asteroids){
6            bool alive = true;
7            while (alive && !stack.empty() && stack.back() > 0 && x < 0) {
8                if(stack.back() < -x){
9                    stack.pop_back();
10                }
11                else if(stack.back() == -x){
12                    stack.pop_back();
13                    alive = false;
14                }
15                else{
16                    alive = false;
17                }
18            }
19                if(alive){
20                    stack.push_back(x);
21            }
22        }
23        return stack;
24    }
25};