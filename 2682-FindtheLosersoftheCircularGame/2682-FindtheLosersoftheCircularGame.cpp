// Last updated: 04/07/2026, 20:42:14
1class Solution {
2public:
3    vector<int> circularGameLosers(int n, int k) {
4        vector<bool> received(n, false);
5        int current_friend = 0;
6        int turn = 1;
7        while(!received[current_friend]){
8            received[current_friend] = true;
9            current_friend = (current_friend + turn * k) % n;
10            turn++;
11        }
12        vector<int> losers;
13        for(int i = 0; i < n; i++){
14            if(!received[i]){
15                losers.push_back(i + 1);
16            }
17        }
18        return losers;
19    }
20};