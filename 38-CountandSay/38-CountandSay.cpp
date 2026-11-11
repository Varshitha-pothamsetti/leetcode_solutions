// Last updated: 11/11/2026, 21:30:26
1class Solution {
2public:
3    string countAndSay(int n) {
4        string s = "1";
5        for(int i = 0; i < n - 1; i++){
6            string ans = "";
7            int count = 1;
8            for(int j = 1; j < s.length(); j++){
9                if(s[j] == s[j - 1]){
10                    count++;
11                }
12                else{
13                    ans += to_string(count);
14                    ans += s[j - 1];
15                    count = 1;
16                }
17            }
18            ans += to_string(count);
19            ans += s.back();
20            s = ans;
21        }
22        return s;
23    }
24};