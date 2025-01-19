//https://leetcode.com/problems/trapping-rain-water-ii/description/



class Solution {
public:
    typedef pair<int, pair<int, int>> piii;
    int trapRainWater(vector<vector<int>>& h) {
        int n = h.size();
        int m = h[0].size();
        priority_queue<piii, vector<piii>, greater<piii>> pq;
        int dx[4] = {1, 0, 0, -1};
        int dy[4] = {0, 1, -1, 0};
         vector<vector<int>>vis(n , vector<int>(m , 0));
        for (int i = 0; i < n; i++) {
            pq.push({h[i][0], {i, 0}});
            vis[i][0]=1;
            pq.push({h[i][m - 1], {i, m - 1}});
            vis[i][m-1]=1;
        }
        for (int j = 0; j < m; j++) {
            pq.push({h[0][j], {0, j}});
            pq.push({h[n - 1][j], {n - 1, j}});
            vis[0][j]=1;
            vis[n-1][j]=1;
        }
        int ans = 0;
        
        while (!pq.empty()) {
            auto node = pq.top();
            int mn = node.first;
            int i = node.second.first;
            int j = node.second.second;
            pq.pop();
            for (int k = 0; k < 4; k++) {
                int ni = i + dx[k];
                int nj = j + dy[k];
                if (ni >= 0 && nj >= 0 && ni < n && nj < m &&
                    vis[ni][nj] == 0) {
                    if (h[ni][nj] < mn) {
                        ans += mn - h[ni][nj];
                        pq.push({mn , {ni , nj}});
                    }
                    else 
                    pq.push({h[ni][nj] , {ni , nj}});
                    vis[ni][nj]=1;
                }
            }
        }
        return ans;   
    }
};
