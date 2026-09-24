class Solution:
    def maxProductDifference(self, nums: List[int]) -> int:
        temp = sorted(nums)
        return abs((temp[0]*temp[1])-(temp[-1]*temp[-2]))