// Last updated: 18/05/2026, 21:46:11
1class Solution {
2public:
3    int divisorSubstrings(int num, int k) {
4        string s = to_string(num);
5        int count = 0;
6        for (int i = 0; i <= s.length() - k; i++) {
7            string sub = s.substr(i, k);
8            int val = stoi(sub);
9            if (val != 0 && num % val == 0) {
10                count++;
11            }
12        }
13        return count;
14    }
15};