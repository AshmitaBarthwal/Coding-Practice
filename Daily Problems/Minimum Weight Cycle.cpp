//https://www.geeksforgeeks.org/problems/minimum-weight-cycle/1



class Solution {
  public:
    int findMinCycle(int V, vector<vector<int>>& edges) {
         int res = INT_MAX;
        
        // Creating adjacency matrix
        vector<vector<pair<int,int>>> adj(V);
        for(auto& edge:edges){
            int v=edge[0];
            int u=edge[1];
            int wt=edge[2];
            adj[v].push_back({u,wt});
            adj[u].push_back({v,wt});
        }
        
        // Using Dijkstra's algorithm for each edge by removing that edge and calculating the shortest distance from the edge points
        // to find if the loop is present or not between that edge and the shortest weight for that loop
        for(auto& edge : edges){
            
            int src = edge[0], des = edge[1], weight = edge[2];
            vector<int> dist(V,INT_MAX);
            dist[src] = 0;
            
            priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
            pq.push({src,0});
            
            while(pq.size() != 0){
                
                int cur = pq.top().first;
                int curWt = pq.top().second;
                pq.pop();
                
                for(auto x : adj[cur]){
                    
                    int childs = x.first;
                    
                    //to ignore that corresponding edge 
                    if((cur == src && childs == des) || (cur == des && childs == src) ) continue;
                    
                    int wts = x.second;
                    
                    if(dist[cur] + wts < dist[childs]){
                        dist[childs] = dist[cur]+wts;
                        pq.push({childs,dist[childs]});
                    }
                }
            }
            
            if( dist[des] != INT_MAX){
                res = min(res, weight + dist[des]);
            }
            
        }
        
        return res;
        
    }
};
