class Solution:
    def maxProductDifference(self, nums: List[int]) -> int:
        temp = sorted(nums)
        return ((temp[-1]*temp[-2])-(temp[0]*temp[1]))