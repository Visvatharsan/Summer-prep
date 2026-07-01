class Solution {
public:
    void checker(vector<vector<int>>& arr,int sr,int sc, int color, int x){
        int r=arr.size();
        int c= arr[0].size();

        if(arr[sr][sc] == x){
            arr[sr][sc]=color;
            if(sr-1 >=0){
                checker(arr, sr-1, sc, color, x);
            }
            if(sc-1 >=0){
                checker(arr,sr,sc-1,color, x);
            }
            if(sr+1<r){
                checker(arr,sr+1,sc,color,x);
            }
            if(sc+1<c){
                checker(arr,sr,sc+1,color,x);
            }
        }
        else{
            return;
        }
    } 

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int x=image[sr][sc];
        if(x != color){
            checker(image, sr,sc,color,x);
        }
        return image;

    }
};