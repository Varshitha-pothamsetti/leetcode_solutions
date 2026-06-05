// Last updated: 05/06/2026, 20:02:36
1class Solution {
2public:
3    string addStrings(string num1, string num2) {
4        int i = num1.size() - 1;
5        int j = num2.size() - 1;
6        int carry = 0;
7        string ans = "";
8        while (i >= 0 || j >= 0 || carry) {
9            int sum = carry;
10            if (i >= 0)
11                sum += num1[i--] - '0';
12            if (j >= 0)
13                sum += num2[j--] - '0';
14            ans.push_back((sum % 10) + '0');
15            carry = sum / 10;
16        }
17        reverse(ans.begin(), ans.end());
18        return ans;
19    }
20};