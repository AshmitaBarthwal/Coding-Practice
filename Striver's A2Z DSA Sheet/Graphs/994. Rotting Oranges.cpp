//https://leetcode.com/problems/rotting-oranges/description/


class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<pair<int,int>,int>> q;
        // {{row,col},time}
        int vis[n][m];
        int tm=0,c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    c++;
                }
                if(grid[i][j]==2) 
                {
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                else
                {
                    vis[i][j]=0;
                }
                
            }
        }
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        int cnt=0;
        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            tm=max(tm,t);
            q.pop();
            for(int i=0;i<4;i++)
            {
                int newr=r+dr[i];
                int newc=c+dc[i];
                if(newr>=0 && newr<n && newc>=0 && newc<m && vis[newr][newc]!=2 && grid[newr][newc]==1)
                {
                    q.push({{newr,newc},t+1});
                    vis[newr][newc]=2;
                    cnt++;
                }
            }
            
        }
        if(c!=cnt) return -1;
        return tm;
    }
};
