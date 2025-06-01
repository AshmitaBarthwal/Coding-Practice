//https://www.geeksforgeeks.org/problems/count-pairs-sum-in-matrices4332/1



class Solution {
  public:
    int countPairs(vector<vector<int>> &mat1, vector<vector<int>> &mat2, int x) {
         int n = mat1.size();
        int i=0, j=0;
        int k=n-1,l=n-1;
        int count = 0;
        
        while(true)
        {
            int sum = mat1[i][j] + mat2[k][l];
            if(sum == x)
            {
                count++;
                j++;
                l--;
            }
            else if(sum < x)
            {
                j++;
            }
            else
            {
                l--;
            }
            
            if(j==n)
            {
                i++;
                j=0;
            }
            
            if(l==-1)
            {
                k--;
                l = n-1;
            }
            
            if(i==n || k ==-1)
            {
                break;
            }
        }
        
        return count;
    }
};
