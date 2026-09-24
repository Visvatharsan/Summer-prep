class Solution:
    def sortColors(self, nums: list[int]) -> None:
        n0=0
        n1=0
        n2=0

        for i in nums:
            if(i==0):n0+=1
            if(i==1):n1+=1
            if(i==2):n2+=1
        
        for i in range(len(nums)):
            if(n0 != 0):
                nums[i]=0
                n0-=1
            elif(n1 != 0):
                nums[i]=1
                n1-=1
            else:
                nums[i]=2
                n2-=1

        return nums