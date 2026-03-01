# Last updated: 01/03/2026, 20:19:43
class Solution:
    def commonFactors(self, a: int, b: int) -> int:
        count = 0
        min_number = a if a > b else b

        for i in range(1, min_number + 1):
            if a % i == 0 and b % i == 0:
                count = count + 1

        return count 