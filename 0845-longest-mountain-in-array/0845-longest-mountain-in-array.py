class Solution:
    def longestMountain(self, arr: list[int]) -> int:
        if len(arr)<3:
            return 0

        i = 1
        ans=0
        while(i<=len(arr)-2):
            if(arr[i] > arr[i-1] and arr[i] > arr[i+1]):
                count=0
                j=i
                while(j>0 and arr[j]>arr[j-1]):
                    count+=1
                    j-=1
                while(i<=len(arr)-2 and arr[i]>arr[i+1]):
                    count+=1
                    i+=1

                ans=max(ans,count+1)
            else:
                i+=1
        return ans

