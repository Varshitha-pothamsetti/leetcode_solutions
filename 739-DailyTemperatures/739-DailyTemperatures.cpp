// Last updated: 11/08/2026, 20:13:24
1class Solution {
2public:
3    vector<int> dailyTemperatures(vector<int>& temperatures) {
4        int n = temperatures.size();
5        vector<int> ans(n, 0);
6        stack<int> st;
7        for(int i = 0; i < n; i++){
8            while(!st.empty() && temperatures[i] > temperatures[st.top()]){
9                int index = st.top();
10                st.pop();
11                ans[index] = i - index;
12            }
13            st.push(i);
14        }
15        return ans;
16    }
17};