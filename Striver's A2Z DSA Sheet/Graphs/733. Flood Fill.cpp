//https://leetcode.com/problems/flood-fill/description/



class Solution {
public:
    void dfs(int r,int c,vector<vector<int>>& ans,
    vector<vector<int>>& image,int color,int dr[],int dc[],int inicolor)
    {
        ans[r][c]=color;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++)
        {
            int nr=r+dr[i];
            int nc=c+dc[i];
            if(nr>=0 && nr<n && nc>=0 && nc<m && ans[nr][nc]!=color && image[nr][nc]==inicolor )
            {
                dfs(nr,nc,ans,image,color,dr,dc,inicolor);
            }
        }

    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        int inicolor=image[sr][sc];
        vector<vector<int>>ans =image;
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        dfs(sr,sc,ans,image,color,dr,dc,inicolor);
        return ans;
    }
};
