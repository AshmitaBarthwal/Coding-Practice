# https://www.geeksforgeeks.org/problems/triangle-number-1661428795/1
class Solution {
  public:
    void printTriangle(int n) {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    
};
