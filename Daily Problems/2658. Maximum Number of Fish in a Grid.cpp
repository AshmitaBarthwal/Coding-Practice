//https://leetcode.com/problems/maximum-number-of-fish-in-a-grid/description/



class Solution 
{
public:
    int findMaxFish(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int maxFish = 0;

        int dr[] = {-1, 0, 1, 0};
        int dc[] = {0, 1, 0, -1};

        for (int i = 0; i < n; ++i) 
        {
            for (int j = 0; j < m; ++j) 
            {
                if (grid[i][j] > 0 && !vis[i][j]) 
                { 
                    maxFish = max(maxFish, dfs(i, j, grid, vis, dr, dc)); 
                }
            }
        }

        return maxFish;
    }

public:
    int dfs(int r, int c, vector<vector<int>>& grid, vector<vector<int>>& vis, int dr[], int dc[]) 
    {
        vis[r][c] = 1;
        int fish = grid[r][c];

        for (int i = 0; i < 4; i++) 
        {
            int nr = r + dr[i];
            int nc = c + dc[i];
            if (nr >= 0 && nr < grid.size() && nc >= 0 && nc < grid[0].size() && grid[nr][nc] > 0 && !vis[nr][nc]) 
            {
                fish += dfs(nr, nc, grid, vis, dr, dc);
            }
        }

        return fish;
    }
};
