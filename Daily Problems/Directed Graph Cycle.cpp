//https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1



class Solution {
  public:
    bool isCyclic(int V, vector<vector<int>> &edges) 
    {
        vector<int>in(V,0);
        vector<vector<int>>g(V);
        for(int i=0;i<edges.size();i++){
            g[edges[i][0]].push_back(edges[i][1]);
        }
        for(auto vec:g){
            for(auto val:vec){
                in[val]++;
            }
        }
        queue<int>q;
        for(int i=0;i<V;i++){
            if(in[i] == 0){
                q.push(i);
            }
        }
        vector<int>vec;
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            vec.push_back(curr);
            for(auto adj:g[curr]){
                in[adj]--;
                if(in[adj] == 0){
                    q.push(adj);
                }
            }
        }
        return vec.size() < V;
        
    }
};
