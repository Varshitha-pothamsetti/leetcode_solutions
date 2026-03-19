// Last updated: 19/03/2026, 20:36:19
1class Solution {
2public:
3    int calPoints(vector<string>& operations) {
4        vector<int> st;
5        for (string op : operations) {
6            if (op == "C") {
7                st.pop_back();
8            }
9            else if (op == "D") {
10                st.push_back(2 * st.back());
11            }
12            else if (op == "+") {
13                int n = st.size();
14                st.push_back(st[n-1] + st[n-2]);
15            }
16            else {
17                st.push_back(stoi(op)); 
18            }
19        }
20        int sum = 0;
21        for (int x : st) {
22            sum += x;
23        }
24        return sum;
25    }
26};