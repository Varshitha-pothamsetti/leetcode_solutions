// Last updated: 04/03/2026, 14:27:15
1class Solution {
2public:
3    int countOdds(int low, int high) {
4        int total = (high - low + 1);
5        int count = total / 2;
6        if(low % 2 == 1 && high % 2 == 1){
7            count++;
8        }
9        return count;
10    }
11};