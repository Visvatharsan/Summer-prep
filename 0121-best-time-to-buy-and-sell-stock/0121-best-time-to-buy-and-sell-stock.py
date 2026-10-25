class Solution:
    def maxProfit(self, prices: list[int]) -> int:
        mp=prices[0]
        profit=0

        for i in prices[1:]:
            if(i<mp):
                mp=i
            profit=max(profit,i-mp)
        
        return profit