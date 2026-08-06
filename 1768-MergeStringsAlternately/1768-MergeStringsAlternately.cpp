// Last updated: 06/08/2026, 20:59:27
1class Solution {
2public:
3    string mergeAlternately(string word1, string word2) {
4        string ans = "";
5        int i = 0;
6        while(i < word1.size() && i < word2.size()){
7            ans += word1[i];
8            ans += word2[i];
9            i++;
10        }
11        while(i < word1.size()){
12            ans += word1[i];
13            i++;
14        }
15        while(i < word2.size()){
16            ans += word2[i];
17            i++;
18        }
19        return ans;
20    }
21};