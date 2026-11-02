// Last updated: 02/11/2026, 21:04:23
1class Solution {
2public:
3    void duplicateZeros(vector<int>& arr) {
4        int n = arr.size();
5        int zeroes = 0;
6        for(int i = 0; i < n; i++){
7            if(arr[i] == 0){
8                zeroes++;
9            }
10        }
11        int i = n - 1;
12        int j = n + zeroes - 1;
13        while(i < j){
14            if(j < n){
15                arr[j] = arr[i];
16            }
17            if(arr[i] == 0){
18                j--;
19                if(j < n){
20                    arr[j] = 0;
21                }
22            }
23            i--;
24            j--;
25        }
26    }
27};