// Last updated: 09/10/2026, 21:29:01
1class Solution {
2public:
3    string reverseOnlyLetters(string s) {
4        int left = 0, right = s.size() - 1;
5        while(left < right){
6            if(!isalpha(s[left])){
7                left++;
8            }
9            else if(!isalpha(s[right])){
10                right--;
11            }
12            else{
13                swap(s[left], s[right]);
14                left++;
15                right--;
16            }
17        }
18        return s;
19    }
20};