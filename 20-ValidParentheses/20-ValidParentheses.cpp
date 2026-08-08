// Last updated: 08/08/2026, 11:06:40
1class Solution {
2public:
3    bool isValid(string s) {
4        if (s.length() % 2 != 0) return false;
5        
6        std::stack<char> st;
7        std::unordered_map<char, char> matching_bracket = {
8            {')', '('},
9            {'}', '{'},
10            {']', '['}
11        };
12        for (char c : s) {
13            if (matching_bracket.count(c)) {
14                if (st.empty() || st.top() != matching_bracket[c]) {
15                    return false;
16                }
17                st.pop();
18            } else {
19                st.push(c);
20            }
21        }
22        return st.empty();
23    }
24};