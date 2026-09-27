// Last updated: 27/09/2026, 18:31:08
1class Solution {
2public:
3    string reverseVowels(string s) {
4        int i = 0, j = s.size() - 1;
5        while(i < j){
6            while(i < j && !isvowel(s[i]))
7               i++;
8            while(i < j && !isvowel(s[j]))
9               j--;
10            swap(s[i], s[j]);
11            i++;
12            j--;
13        }
14        return s;
15    }
16    bool isvowel(char c){
17        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
18               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ;
19    }
20};