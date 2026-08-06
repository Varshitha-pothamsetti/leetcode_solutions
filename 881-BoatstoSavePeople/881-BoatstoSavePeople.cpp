// Last updated: 06/08/2026, 21:37:41
1class Solution {
2public:
3    int numRescueBoats(vector<int>& people, int limit) {
4        sort(people.begin(), people.end());
5        int i = 0;
6        int j = people.size() - 1;
7        int boats = 0;
8        while(i <= j){
9            if(people[i] + people[j] <= limit){
10                i++;
11            }
12            j--;
13            boats++;
14        }
15        return boats;
16    }
17};