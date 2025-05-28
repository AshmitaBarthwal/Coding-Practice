//https://leetcode.com/problems/maximize-the-number-of-target-nodes-after-connecting-trees-i/?envType=daily-question&envId=2025-05-28




class Solution {
public:
    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2, int k) 
    {
        int n = edges1.size()+1;
        int m = edges2.size()+1;
        unordered_map<int,vector<int>> graph1, graph2;
        for(auto& edge:edges1){
            graph1[edge[0]].push_back(edge[1]);
            graph1[edge[1]].push_back(edge[0]);
        }
        for(auto& edge:edges2){
            graph2[edge[0]].push_back(edge[1]);
            graph2[edge[1]].push_back(edge[0]);
        }

        vector<int>ans(n,0);
        int summation = 0;
        for(int i=0;i<m;i++){
            summation = max(summation,dfs(graph2,i,-1,k-1));
        }
        for(int i=0;i<n;i++){
            ans[i] += dfs(graph1,i,-1,k)+summation;
        }
        return ans;
    }
};
