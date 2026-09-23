
class Solution:
    def smallerNumbersThanCurrent(self, nums: list[int]) -> list[int]:
        temp=sorted(nums)
        map=Counter()
        ans=[]
        for i in range(len(temp)):
            if(temp[i] not in map):
                map[temp[i]]=i
        for j in range(len(nums)):
            ans.append(map[nums[j]])
        return ans
        