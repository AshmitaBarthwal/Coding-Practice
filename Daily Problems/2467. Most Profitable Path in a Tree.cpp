//https://leetcode.com/problems/most-profitable-path-in-a-tree/description/



class Solution {
public:
    int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) 
    {
        int n = amount.size();

        vector<vector<int>> adj(n);

        for(auto i: edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
 
        vector<int> timeStamp(n, 1e6);
        vector<int> parent(n, -1);
        
        function<bool(int, int, int)> findBobPath = [&](int node, int par, int time) {
            if (node == 0) {
                timeStamp[node] = time;
                return true;
            } 
            for (int neighbor : adj[node]) {
                if (neighbor != par) {
                    if (findBobPath(neighbor, node, time + 1)) {
                        timeStamp[node] = time;
                        return true;
                    }
                }
            }
            return false;
        };
        
        findBobPath(bob, -1, 0);
           
        function<int(int, int, int)> dfs = [&](int node, int par, int time) {
            int profit = amount[node];
            if (timeStamp[node] == time) {
                profit /= 2;
            } else if (timeStamp[node] < time) {
                profit = 0;
            }
            
            int maxChildProfit = INT_MIN;
            bool isLeaf = true;
            for (int neighbor : adj[node]) {
                if (neighbor != par) {
                    isLeaf = false;
                    maxChildProfit = max(maxChildProfit, dfs(neighbor, node, time + 1));
                }
            }
            if (isLeaf) {
                return profit;
            } else {
                return profit + maxChildProfit;
            }
        };
        
        return dfs(0, -1, 0);
    }
};
