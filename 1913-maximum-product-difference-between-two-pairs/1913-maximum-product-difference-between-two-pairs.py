class Solution:
    def maxProductDifference(self, nums: List[int]) -> int:
        mi1=99999
        mi2=99999

        ma1=-1
        ma2=-1

        for i in nums:
            if(i > ma1):
                ma2=ma1
                ma1=i
            elif(i>ma2):
                ma2=i
            
            if (i<mi1):
                mi2=mi1
                mi1=i
            elif(i<mi2):
                mi2=i
        
        return ((ma1 * ma2) - (mi1*mi2))