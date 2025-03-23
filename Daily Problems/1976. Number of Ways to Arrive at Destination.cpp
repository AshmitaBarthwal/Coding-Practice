//https://leetcode.com/problems/number-of-ways-to-arrive-at-destination/description/?envType=daily-question&envId=2025-03-23




class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<int,int>>adj[n];
        // creating adjacency list 
        for(auto& r:roads){
            adj[r[0]].push_back({r[1],r[2]});
            adj[r[1]].push_back({r[0],r[2]});
        }    
        // distance vector
        vector<long long>dist(n,1e18),ways(n,0);
        priority_queue<pair<long long,int>,
        vector<pair<long long,int>>,greater<>>pq;
        int mod=1e9+7;
        dist[0]=0;
        ways[0]=1;
        pq.push({0,0});
        while(!pq.empty()){
            auto [d,u]=pq.top(); pq.pop();
            if(d>dist[u])continue;
            for(auto&[v,w]:adj[u]){
                if(dist[v]>d+w){
                    dist[v]=d+w;
                    ways[v]=ways[u];
                    pq.push({dist[v],v});
                }else if(dist[v]==d+w){
                    ways[v]=(ways[v]+ways[u])%mod;
                }
            }
        }
        return ways[n-1];
    }
};
