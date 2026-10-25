// Last updated: 25/10/2026, 21:04:22
1
2class Solution {
3public:
4    int distributeCandies(vector<int>& candyType) {
5        set<int> s(candyType.begin(), candyType.end());
6        return min((int)s.size(), (int)candyType.size() / 2);
7    }
8};
9