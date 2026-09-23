class Solution:
    def countElements(self, nums: list[int]) -> int:
        mi=min(nums)
        ma=max(nums)
        count=0
        for i in nums:
            if (i > mi and i<ma):
                count+=1
        return count


            
        