"""
dynamic programming
"""

class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        size = len(nums)
        if size == 0:
            return 0
        elif size == 1:
            return nums[0]
        
        result, current = nums[0], nums[0]
        for i in range(1, size):
            if current < 0:
                current = 0
            current += nums[i]
            if current > result:
                result = current
        return result