# Last updated: 09/09/2026, 21:26:55
class Solution:
    def commonFactors(self, a: int, b: int) -> int:
        count = 0
        min_number = a if a > b else b

        for i in range(1, min_number + 1):
            if a % i == 0 and b % i == 0:
                count = count + 1

        return count 