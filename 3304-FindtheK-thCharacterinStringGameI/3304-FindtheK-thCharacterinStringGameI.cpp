// Last updated: 05/07/2026, 19:43:28
1class Solution {
2public:
3    char kthCharacter(int k) {
4       string word = "a";
5       while(word.size() < k){
6        string next = "";
7        for(char ch : word){
8            if(ch == 'z')
9              next += 'a';
10            else
11              next += ch + 1;
12        }
13        word += next;
14       } 
15       return word[k - 1];
16    }
17};