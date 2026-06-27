class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> arr;
        if((r*c) != mat.size() * mat[0].size() ){
            return mat;
        }

        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[i].size(); j++){
                arr.push_back(mat[i][j]);
            }
        }

        vector<vector<int>> ans(r,vector<int>(c));

        int k=0;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                ans[i][j]=arr[k++];
            }
        }
        return ans;
    }
};