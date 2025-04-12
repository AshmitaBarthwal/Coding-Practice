//https://www.geeksforgeeks.org/problems/flood-fill-algorithm1856/1



class Solution {
  public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) 
    {
         int n = image.size();
        int m = image[0].size();
        
        if(image[sr][sc]==newColor)
           return image;
        
        int orignal = image[sr][sc];
        vector<vector<int>> directions={{-1,0},{1,0},{0,-1},{0,1}};
        
        queue<pair<int,int>> q;
        q.push({sr,sc});
        
        image[sr][sc] = newColor;
        
        while(!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            for(auto &dir:directions) {
                int nx = x+dir[0];
                int ny = y+dir[1];
                
                if(nx>=0 && nx<n && ny>=0 && ny<m && image[nx][ny]==orignal) {
                    image[nx][ny] = newColor;
                    q.push({nx,ny});
                }
            }
            
        }
        return image;
        
    }
};
