class Solution:
    def pivotIndex(self, nums: list[int]) -> int:
        sl=0
        sr=0
        for i in range(len(nums)):
            sr+=nums[i]
        
        for i in range(len(nums)):
            x=nums[i]
            sr-=x
            if(sr==sl):
                return i
            sl+=x
        return -1
        