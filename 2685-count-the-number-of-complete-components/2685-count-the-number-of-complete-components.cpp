class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> adj;
        unordered_map<int, bool> visited;
        int ans = 0;
        for (auto i : edges) {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }

        for (auto i : adj) {
            visited[i.first] = false;
        }

        for(int i =0; i<n; i++) {
            if (visited[i]) {
                continue;
            }
            int nodes=0;
            int edges = 0;

            int node = i;
            stack<int> st;
            st.push(node);
            visited[node]=true;

            while (!st.empty()) {
                int curr = st.top();
                st.pop();
                
                nodes++;
                edges+=adj[curr].size();
                for (auto x : adj[curr]) {
                    if (visited[x]) {
                        continue;
                    }
                    visited[x] = true;
                    st.push(x);
                }
            }

            edges/=2;

            if(edges == nodes*(nodes-1)/2){
                ans++;
            }
        }
        return ans;
    }
};