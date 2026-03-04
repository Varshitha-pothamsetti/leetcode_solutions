// Last updated: 04/03/2026, 13:48:14
1class Solution {
2public:
3    char findTheDifference(string s, string t) {
4      char c;
5      int arr[26] = {0};
6      for(int i = 0; i < s.length(); i++){
7        arr[s[i] - 'a']++;
8      }  
9      for(int i = 0; i < t.length(); i++){
10        if(arr[t[i] - 'a'] > 0){
11            arr[t[i] - 'a']--;
12        }
13        else if(arr[t[i] - 'a'] == 0){
14            c = t[i];
15        }
16      }
17      return c;
18    }
19};