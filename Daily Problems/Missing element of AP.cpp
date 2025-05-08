//https://www.geeksforgeeks.org/problems/missing-element-of-ap2228/1



// User function template for C++

class Solution {
  public:
    int findMissing(vector<int> &arr) 
    {
        int n=arr.length;
        
        int diff=arr[1]-arr[0];
        
        for(int i=2;i<n;i++)
        {
            if(arr[i-1]!=arr[i]-diff)
            return arr[i]-diff;
        }
        return arr[n-1]+diff;
    }
};
