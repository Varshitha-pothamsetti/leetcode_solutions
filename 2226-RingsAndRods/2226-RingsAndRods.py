# Last updated: 01/03/2026, 20:19:52
class Solution:
    def countPoints(self, rings: str) -> int:
        count = 0
        for i in range(10):
            c= str(i)
            if "B"+c in rings and "G"+c in rings and "R"+c in rings:
                count += 1
        return count
        