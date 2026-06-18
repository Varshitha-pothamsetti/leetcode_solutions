// Last updated: 18/06/2026, 20:47:58
1class Solution {
2public:
3    bool sumGame(string num) {
4        int n = num.size();
5        int sumLeft = 0, sumRight = 0;
6        int qLeft = 0, qRight = 0;
7        for(int i = 0; i < n/2; i++){
8            if(num[i] == '?')
9               qLeft++;
10            else
11               sumLeft += num[i] - '0';
12        }
13        for(int i = n/2; i < n; i++){
14            if(num[i] == '?')
15              qRight++;
16            else
17              sumRight += num[i] - '0';
18        }
19        if((qLeft + qRight) % 2)
20           return true;
21
22           return(sumLeft - sumRight) != (qRight - qLeft) / 2 * 9;
23    }
24};