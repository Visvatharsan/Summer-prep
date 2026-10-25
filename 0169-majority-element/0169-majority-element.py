class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        d=Counter(nums)
        x=nums[0]
        y=d[x]
        for i in d.keys():
            if(d[i] > y):
                x=i
                y=d[i]
        return x