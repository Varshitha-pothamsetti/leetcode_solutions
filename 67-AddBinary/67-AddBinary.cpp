// Last updated: 09/06/2026, 21:58:05
1class Solution {
2public:
3    string addBinary(string a, string b) {
4        int i = a.size() - 1;
5        int j = b.size() - 1;
6        int carry = 0;
7        string ans = "";
8        while (i >= 0 || j >= 0 || carry) {
9            int sum = carry;
10            if (i >= 0)
11                sum += a[i--] - '0';
12            if (j >= 0)
13                sum += b[j--] - '0';
14            ans.push_back((sum % 2) + '0');
15            carry = sum / 2;
16        }
17        reverse(ans.begin(), ans.end());
18        return ans;
19    }
20};