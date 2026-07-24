class Solution {
public:

    void dfs(int r, int c, vector<vector<char>>& grid, vector<vector<bool>>& visited){
        if(r>=0 && r<grid.size() && c>= 0 && c<grid[0].size() && !visited[r][c] && grid[r][c] == '1'){
            visited[r][c] = true;
            dfs(r-1, c, grid, visited);
            dfs(r+1, c, grid, visited);
            dfs(r, c-1, grid, visited);
            dfs(r, c+1, grid, visited);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size();
        int c=  grid[0].size();
        int ci=0;
        vector<vector<bool>> visited(r, vector<bool> (c, false));

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(!visited[i][j] && grid[i][j] == '1'){
                    dfs(i,j,grid,visited);
                    ci++;
                }
            }
        } 
        return ci;
    }
};