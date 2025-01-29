//https://leetcode.com/problems/redundant-connection/description/



class Solution {
public:
    bool hasCycle(int node, int parent, vector<vector<int>>& adj, vector<bool>& vis) 
    {
        vis[node] = true;
        for (auto it : adj[node]) 
        {
            if (!vis[it]) 
            {
                if (hasCycle(it, node, adj, vis)) 
                {
                    return true;
                }
            } 
            else if (it != parent) 
            {
                return true;
            }
        }
        return false;
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) 
    {
        int n = edges.size();
        vector<vector<int>> adj(n + 1);
        vector<bool> vis(n + 1, false);

        for (auto it : edges) 
        {
            int u = it[0], v = it[1];

            adj[u].push_back(v);
            adj[v].push_back(u);

            fill(vis.begin(), vis.end(), false);

            if (hasCycle(u, -1, adj, vis)) 
            {
                return it;
            }
        }

        return {};
    }
};
