// Last updated: 14/08/2026, 10:28:32
1class Solution {
2public:
3    bool possible(vector<int>& weights, int days, int capacity) {
4        int count = 1;
5        int sum = 0;
6        for (int weight : weights) {
7            if (sum + weight <= capacity) {
8                sum += weight;
9            } else {
10                count++;
11                sum = weight;
12            }
13        }
14        return count <= days;
15    }
16    int shipWithinDays(vector<int>& weights, int days) {
17        int low = 0;
18        int high = 0;
19        for (int weight : weights) {
20            low = max(low, weight);
21            high += weight;
22        }
23        while (low <= high) {
24            int mid = low + (high - low) / 2;
25            if (possible(weights, days, mid)) {
26                high = mid - 1;
27            } else {
28                low = mid + 1;
29            }
30        }
31        return low;
32    }
33};