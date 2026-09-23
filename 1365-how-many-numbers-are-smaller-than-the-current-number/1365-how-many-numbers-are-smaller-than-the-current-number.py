class Solution:
    def smallerNumbersThanCurrent(self, nums: list[int]) -> list[int]:
        ans=[]
        for i in range(len(nums)):
            count=0
            for j in range(len(nums)):
                if(i!=j and nums[i]>nums[j]):
                    count+=1
            ans.append(count)
        return ans
        