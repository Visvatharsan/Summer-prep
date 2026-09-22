class Solution:

    def minCostClimbingStairs(self, cost):
        from functools import cache 
        @cache
        def mincost(n):
            if(n>=len(cost)):
                return 0
            return cost[n]+min(mincost(n+1),mincost(n+2))
        return min(mincost(0),mincost(1))