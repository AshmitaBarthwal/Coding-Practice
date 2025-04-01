//https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1



class Solution {
  public:
    void solve(int Node,vector<vector<int>> &adj, vector<int> &vis, vector<int> &ans)
    {
        vis[Node] = 1;
        ans.push_back(Node);
        for(auto &i : adj[Node])
        {
            if(vis[i] == 0)
            {
                solve(i, adj, vis, ans);
            }
        }
        
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        vector<int> vis(adj.size(), 0), ans;
    
        solve(0, adj, vis, ans);
        return ans;
        
    }


};
