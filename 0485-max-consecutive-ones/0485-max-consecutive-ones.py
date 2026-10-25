class Solution:
    def findMaxConsecutiveOnes(self, nums: list[int]) -> int:
        s=0
        gs=0
        for n in nums:
            if(n==0):
                s=0
            s+=n
            gs=max(s,gs)
        return gs