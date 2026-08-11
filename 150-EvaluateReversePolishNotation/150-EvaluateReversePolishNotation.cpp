// Last updated: 11/08/2026, 11:20:35
1class Solution {
2public:
3    int evalRPN(vector<string>& tokens) {
4        stack<int> st;
5        for(string s:tokens){
6            if(s == "+" || s == "-" || s == "*" || s== "/"){
7                int b = st.top();
8                st.pop();
9                int a = st.top();
10                st.pop();
11                int ans;
12                if(s == "+")
13                   ans = a + b;
14                else if(s == "-")
15                   ans = a - b;
16                else if(s == "*")
17                   ans = a * b;
18                else
19                   ans = a/b;
20                   st.push(ans);
21            }
22            else{
23                st.push(stoi(s));
24            }
25        }
26        return st.top();
27    }
28};