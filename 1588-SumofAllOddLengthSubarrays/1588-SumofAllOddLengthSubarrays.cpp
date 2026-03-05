// Last updated: 05/03/2026, 10:27:50
1class Solution {
2public:
3    int sumOddLengthSubarrays(vector<int>& arr) {
4        int n = arr.size();
5        int Totalsum = 0;
6        for(int i = 0; i < n; i++){
7            int sum = 0;
8            for(int j = i; j < n; j++){
9                sum += arr[j];
10                int length = j - i + 1; 
11                if(length % 2 == 1){
12                    Totalsum += sum;
13                }
14            }
15        }
16        return Totalsum;
17    }
18};