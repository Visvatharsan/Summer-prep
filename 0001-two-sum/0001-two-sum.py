class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        d={}
        for index,val in enumerate(nums):
            x=target-val
            if(x in d):
                return [d[x],index]
            d[val]=index
        return []
        