class Solution:
    def makeSmallestPalindrome(self, s: str) -> str:
        left=0
        right=len(s)-1
        arr=list(s)
        while(left < right):
            if(arr[left] != arr[right]):
                if(arr[left]<arr[right]):
                    arr[right]=arr[left]
                else:
                    arr[left]=arr[right]
            left+=1
            right-=1
        return "".join(arr)