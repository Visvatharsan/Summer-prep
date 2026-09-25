class Solution:
    def maxSubArray(self, nums: list[int]) -> int:
        gmax=-inf
        lmax=0
        for i in nums:
            lmax=max(lmax+i,i)
            gmax=max(gmax,lmax)
        return gmax