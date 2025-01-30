//https://leetcode.com/problems/divide-nodes-into-the-maximum-number-of-groups/description/



class Solution {
public:
    bool isBipartite(unordered_map<int, vector<int>> &adj, int node, vector<int>& col, int clr) {
        col[node] = clr;

        for(int &nbr : adj[node]) {
            if(col[nbr] == col[node]) {
                return false; // Conflict in colors
            }

            if(col[nbr] == -1) {
                if(!isBipartite(adj, nbr, col, 1 - clr)) {
                    return false; // Subgraph not bipartite
                }
            }
        }

        return true;
    }

    int bfs(unordered_map<int, vector<int>> &adj, int start, int n) {
        queue<int> q;
        vector<bool> vis(n, false);
        q.push(start);
        vis[start] = true;

        int lvl = 1; // Track levels in BFS
        while(!q.empty()) {
            int sz = q.size();
            while(sz--) {
                int curr = q.front();
                q.pop();

                for(int &nbr : adj[curr]) {
                    if(vis[nbr]) continue;
                    
                    q.push(nbr);
                    vis[nbr] = true;
                }
            }
            lvl++; // Increment after processing a level
        }

        return lvl - 1; // Exclude last extra increment
    }

    int getMaxFromComp(unordered_map<int, vector<int>> &adj, int node, vector<bool>& vis, vector<int>& lvl) {
        int maxLvl = lvl[node];
        vis[node] = true;

        for(int &nbr : adj[node]) {
            if(!vis[nbr]) {
                maxLvl = max(maxLvl, getMaxFromComp(adj, nbr, vis, lvl));
            }
        }

        return maxLvl;
    }

    int magnificentSets(int n, vector<vector<int>>& edges) {
        unordered_map<int, vector<int>> adj; // Adjacency list

        // Build adjacency list
        for(auto& edge : edges) {
            int u = edge[0] - 1; // Convert to 0-based index
            int v = edge[1] - 1;

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // Check for bipartiteness
        vector<int> col(n, -1); // Color array
        for(int node = 0; node < n; node++) {
            if(col[node] == -1) {
                if(!isBipartite(adj, node, col, 1)) {
                    return -1; // Graph is not bipartite
                }
            }
        }

        // Calculate max levels using BFS for each node
        vector<int> lvl(n, 0);
        for(int node = 0; node < n; node++) {
            lvl[node] = bfs(adj, node, n);
        }

        // Calculate maximum groups in each component
        int maxGrp = 0;
        vector<bool> vis(n, false);
        for(int node = 0; node < n; node++) {
            if(!vis[node]) {
                maxGrp += getMaxFromComp(adj, node, vis, lvl);
            }
        }

        return maxGrp;
    }
};
