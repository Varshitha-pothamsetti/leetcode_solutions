// Last updated: 19/07/2026, 21:56:38
1class Solution {
2public:
3    bool isPalindrome(int x) {
4        long int rev = 0, temp = x;
5    while(temp > 0)
6    {
7        int rem = temp % 10;
8        rev = rev * 10 + rem;
9        temp = temp/10;
10    }  
11    if(x == rev)
12    return true;
13    else
14    return false;
15    }
16};