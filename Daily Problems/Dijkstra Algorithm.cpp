//https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1



vector<vector<int>>adj[V];
        for(auto &it:edges){
            int u=it[0];
            int v=it[1];
            int w=it[2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        
        priority_queue<pair<int, int>, vector<pair<int, int>>,
        greater<pair<int, int>>>pq;
        pq.push({0, src});
        
        vector<int>dist(V, 1e9);
        dist[src]=0;
        
        while(!pq.empty()){
            auto &it=pq.top();
            int d=it.first;
            int node=it.second;
            pq.pop();
            
            for(auto &it:adj[node]){
                int adjN=it[0];
                int adjW=it[1];
                if(d+adjW<dist[adjN]){
                    dist[adjN]=d+adjW;
                    pq.push({dist[adjN], adjN});
                }
            }
        }
        return dist;
    
