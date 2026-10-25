class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        s=set()
        l=0
        for i in range(len(nums)):
            if nums[i] not in s:
                s.add(nums[i])
                nums[i],nums[l]=nums[l],nums[i]
                l+=1
        return len(s)
                