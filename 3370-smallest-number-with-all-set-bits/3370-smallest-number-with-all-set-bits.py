class Solution:
    def smallestNumber(self, n: int) -> int:
        i=1
        while (i<n):
            i=i << 1
            i= i | 1
        return i