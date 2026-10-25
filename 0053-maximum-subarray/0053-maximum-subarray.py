class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        lsum=0
        gsum=float('-inf')
        for i in nums:
            lsum=max(lsum+i, i)
            gsum=max(gsum,lsum)
        return gsum

        