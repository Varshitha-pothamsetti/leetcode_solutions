# Last updated: 01/03/2026, 20:22:23
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        return len(set(nums)) != len(nums)