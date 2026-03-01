# Last updated: 01/03/2026, 20:21:15
class Solution:
    def numJewelsInStones(self, jewels: str, stones: str) -> int:
        count = 0
        for i in stones:
            if i in jewels:
                count+=1
        return count

        