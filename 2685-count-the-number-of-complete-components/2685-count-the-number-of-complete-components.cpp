class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> adj;
        vector<bool> visited(n, false);
        vector<vector<bool>> edgeM(n, vector<bool>(n, false));

        // Build adjacency list
        for (auto &i : edges) {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }

        // Build adjacency matrix
        for (auto &i : edges) {
            edgeM[i[0]][i[1]] = true;
            edgeM[i[1]][i[0]] = true;
        }

        int ans = 0;

        // Traverse every node (important for isolated nodes)
        for (int node = 0; node < n; node++) {
            if (visited[node]) continue;

            set<int> s;
            stack<int> st;

            st.push(node);
            visited[node] = true;

            while (!st.empty()) {
                int curr = st.top();
                st.pop();

                s.insert(curr);

                for (int x : adj[curr]) {
                    if (visited[x]) continue;

                    visited[x] = true;
                    st.push(x);
                }
            }

            bool complete = true;

            for (int u : s) {
                for (int v : s) {
                    if (u == v) continue;

                    if (!edgeM[u][v]) {
                        complete = false;
                        break;
                    }
                }
                if (!complete) break;
            }

            if (complete) ans++;
        }

        return ans;
    }
};