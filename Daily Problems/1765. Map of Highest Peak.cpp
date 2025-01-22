//https://leetcode.com/problems/map-of-highest-peak/description/



class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) 
    {
        int n=isWater.size();
        int m=isWater[0].size();
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        vector<vector<int>> height(n, vector<int>(m, -1));
        queue<pair<int,int>>q;
        for (int i = 0; i < n; i++) 
        {
            for (int j = 0; j < m; j++) 
            {
                if (isWater[i][j] == 1) 
                {
                    height[i][j] = 0;
                    q.push({i, j});
                }
            }
        }
        
        while (!q.empty()) 
        {
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            
            for (int k = 0; k < 4; k++) 
            {
                int nr = r + dr[k];
                int nc = c + dc[k];
                if (nr >= 0 && nr < n && nc >= 0 && nc < m && height[nr][nc] == -1) 
                {
                    height[nr][nc] = height[r][c] + 1;
                    q.push({nr, nc});
                }
            }
        }
        
        return height;
    }
};
