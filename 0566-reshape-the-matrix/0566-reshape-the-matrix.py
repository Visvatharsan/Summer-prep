class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        arr=[]
        ans=[]
        for i in mat:
            for j in i:
                arr.append(j)
        n=0
        if(len(arr) != r*c):
            return mat
            
        for i in range(r):
            tl=[]
            for j in range(c):
                tl.append(arr[n])
                n+=1
            ans.append(tl)
        return ans


        