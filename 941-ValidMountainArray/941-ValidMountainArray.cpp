// Last updated: 29/10/2026, 21:57:47
1class Solution {
2public:
3    bool validMountainArray(vector<int>& arr) {
4        int n = arr.size();
5        int i = 0;
6        while(i + 1 < n && arr[i] < arr[i + 1]){
7            i++;
8        }
9        if(i == 0 || i == n - 1){
10            return false;
11        }
12        while( i + 1 < n && arr[i] > arr[i + 1]){
13            i++;
14        }
15        return i == n - 1;
16    }
17};