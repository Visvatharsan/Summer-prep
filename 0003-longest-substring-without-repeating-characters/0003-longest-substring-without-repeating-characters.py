class Solution:
    def lengthOfLongestSubstring(self, s):
        left=0
        count = 0
        x=set()
        for right in range(len(s)):
            if(s[right] not in x):
                x.add(s[right])
            else:
                while(s[right] in x):
                    x.remove(s[left])
                    left+=1
                x.add(s[right])
            count=max(count,len(x))
        return count
                


        