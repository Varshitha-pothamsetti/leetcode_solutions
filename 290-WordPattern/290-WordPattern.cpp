// Last updated: 04/03/2026, 13:49:19
1class Solution {
2public:
3    bool wordPattern(string pattern, string s) {
4        unordered_map<char, string> m1;
5        unordered_map<string, char> m2;
6
7        stringstream ss(s);
8        string word;
9        int i = 0;
10
11        while (ss >> word) {
12            if (i == pattern.size()) 
13                return false;
14
15            char ch = pattern[i];
16
17            if (m1.count(ch) && m1[ch] != word)
18                return false;
19
20            if (m2.count(word) && m2[word] != ch)
21                return false;
22
23            m1[ch] = word;
24            m2[word] = ch;
25            i++;
26        }
27
28        return i == pattern.size();
29    }
30};
31