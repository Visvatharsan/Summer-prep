class Solution:
    def diagonalSum(self, mat: list[list[int]]) -> int:
        sum = 0
        for i in range(len(mat)):
            sum+=mat[i][i] + mat[i][len(mat)-i-1]
        
        if(len(mat)%2 !=0):
            sum-=mat[len(mat)//2][len(mat)//2]
        return sum