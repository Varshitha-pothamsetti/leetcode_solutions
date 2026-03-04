# Last updated: 04/03/2026, 13:51:59
1class Solution:
2    def numJewelsInStones(self, jewels: str, stones: str) -> int:
3        count = 0
4        for i in stones:
5            if i in jewels:
6                count+=1
7        return count
8
9        