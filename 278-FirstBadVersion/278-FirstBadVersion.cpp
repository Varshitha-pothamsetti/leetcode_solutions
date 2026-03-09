// Last updated: 09/03/2026, 20:48:50
1// The API isBadVersion is defined for you.
2// bool isBadVersion(int version);
3
4class Solution {
5public:
6    int firstBadVersion(int n) {
7        int left = 1, right = n;
8        while(left < right){
9            int mid = left + (right - left) / 2;
10            if(isBadVersion(mid)){
11                right = mid;
12            }
13            else{
14                left = mid + 1;
15            }
16        }
17        return left;
18    }
19};