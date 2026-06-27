class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int r=0;
        int count=0;
        for(int i=0; i<mat.size(); i++){
            int lcount=0;
            for(int j=0; j<mat[i].size(); j++){
                if(mat[i][j] == 1){
                    lcount++;
                }
            }
            if(lcount>count){
                r=i;
                count=lcount;
            }
        }
        return {r,count};
    }
};