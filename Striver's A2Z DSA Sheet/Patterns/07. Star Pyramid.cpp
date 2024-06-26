# https://www.geeksforgeeks.org/problems/triangle-pattern-1661492263/1
class Solution {
  public:
    void printTriangle(int n) {
        for (int i = 0; i < n; i++)
    {
        for (int j =0; j<n-i-1; j++)
        {
            cout <<" ";
        }
        for(int j=0;j< 2*i+1;j++){
            
            cout<<"*";
        }
         for (int j =0; j<n-i-1; j++)
        {
            cout <<" ";
        }
        cout << endl;
    }
}
    
};
