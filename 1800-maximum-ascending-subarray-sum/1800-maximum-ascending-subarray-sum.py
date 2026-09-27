class Solution:
    def maxAscendingSum(self, nums: list[int]) -> int:
        gsum=nums[0]
        lsum=nums[0]
        for i in range(1,len(nums)):
            if(nums[i]>nums[i-1]):
                lsum+=nums[i]
                gsum=max(gsum,lsum)
            else:
                lsum=nums[i]
        return gsum
