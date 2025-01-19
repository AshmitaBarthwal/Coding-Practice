//https://leetcode.com/problems/number-of-provinces/description/


class Solution {
public:
    void dfs(int i,vector<int>&vis,vector<vector<int>>& isConnected)
    {
        vis[i]=1;
        for (int j = 0; j < isConnected.size(); j++) 
      { 
            if (isConnected[i][j] == 1 && !vis[j]) 
            {
                dfs(j, vis, isConnected);
            }
      }
    }
    int findCircleNum(vector<vector<int>>& isConnected) 
    {
        int s=isConnected.size();
        int c=0;
        vector<int>vis(s,0);
        for(int i=0;i<s;i++)
        {
            if(!vis[i])
            {
                c++;
                dfs(i,vis,isConnected);
            }
        }
        return c;
    }
};
