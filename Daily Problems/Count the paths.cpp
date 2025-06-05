//https://www.geeksforgeeks.org/problems/count-the-paths4332/1



class Solution {
  public:
    int dfs(int u, int v, vector<int>adj[], vector<int>&dp){
        if(u==v) return 1;
        if(dp[u]!=-1) return dp[u];
        
        int total=0;
        for(auto &ngbr:adj[u]){
            total+=dfs(ngbr, v, adj, dp);
        }
        return dp[u]=total;
    }
  
    int countPaths(vector<vector<int>>& edges, int V, int src, int dest) {
        // Code here
        vector<int>adj[V];
        for(auto &it:edges){
            adj[it[0]].push_back(it[1]);
        }
        vector<int>dp(V, -1);
        return dfs(src, dest, adj, dp);
    }
};
