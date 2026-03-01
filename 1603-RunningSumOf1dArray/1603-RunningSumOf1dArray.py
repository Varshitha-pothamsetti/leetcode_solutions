# Last updated: 01/03/2026, 20:20:30
class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        result = []
        result.append(nums[0])
        for i in range(1,len(nums)):
            result.append(result[-1]+nums[i])
        return result