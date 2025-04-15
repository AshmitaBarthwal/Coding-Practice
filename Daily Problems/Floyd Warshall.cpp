//https://www.geeksforgeeks.org/problems/implementing-floyd-warshall2042/1



class Solution {
  public:
     void shortestDistance(vector<vector<int>>& mat) {
        // Code here
        int n=mat.size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==-1){
                    mat[i][j]=1e9;
                }
                if(i==j) mat[i][j]=0; 
            }
        }
        
        //applying floyd warsh
        for(int val=0;val<n;val++){
            for (int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    mat[i][j]=min(mat[i][j],mat[i][val]+mat[val][j]);
                }
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1e9){
                    mat[i][j]=-1;
                }
            }
        }
    }
};
