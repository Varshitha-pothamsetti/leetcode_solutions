// Last updated: 18/06/2026, 20:45:52
1class Solution {
2public:
3    bool sumGame(string num) {
4        int n = num.size();
5        int sumL = 0, sumR = 0;
6        int qL = 0, qR = 0;
7        for(int i = 0; i < n/2; i++){
8            if(num[i] == '?')
9               qL++;
10            else
11               sumL += num[i] - '0';
12        }
13        for(int i = n/2; i < n; i++){
14            if(num[i] == '?')
15              qR++;
16            else
17              sumR += num[i] - '0';
18        }
19        if((qL + qR) % 2)
20           return true;
21
22           return(sumL - sumR) != (qR - qL) / 2 * 9;
23    }
24};