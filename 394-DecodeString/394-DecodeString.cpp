// Last updated: 12/08/2026, 21:53:32
1class Solution {
2public:
3    string decodeString(string s) {
4        stack<int> nums;
5        stack<string> st;
6        string curr = "";
7        int num = 0;
8        for(char ch : s) {
9            if(isdigit(ch)) {
10                num = num * 10 + (ch - '0');
11            }
12            else if(ch == '[') {
13                nums.push(num);
14                st.push(curr);
15                num = 0;
16                curr = "";
17            }
18            else if(ch == ']') {
19                int k = nums.top();
20                nums.pop();
21                string temp = st.top();
22                st.pop();
23                for(int i = 0; i < k; i++) {
24                    temp += curr;
25                }
26                curr = temp;
27            }
28            else {
29                curr += ch;
30            }
31        }
32        return curr;
33    }
34};