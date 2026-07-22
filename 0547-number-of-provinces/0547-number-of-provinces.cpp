class Solution {
public:

    void dfs(int city, vector<vector<int>>& isConnected, vector<bool>& isVisited){
        isVisited[city] = true;

        for(int neighbour=0; neighbour<isConnected.size(); neighbour++){
            if(isConnected[city][neighbour] == 1 && !isVisited[neighbour]){
                dfs(neighbour, isConnected, isVisited);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();

        vector<bool> isVisited(n,false);
        int province=0;

        for(int i=0; i<n; i++){
            if(!isVisited[i]){
                province++;
                dfs(i,isConnected, isVisited);
            }
        }
        return province;
    }
};