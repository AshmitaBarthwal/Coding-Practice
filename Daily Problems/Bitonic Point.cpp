//https://www.geeksforgeeks.org/problems/maximum-value-in-a-bitonic-array3001/1



// User function template for C++
class Solution 
{
  public:
    int findMaximum(vector<int> &arr) 
    {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        return arr[n-1];
    }
};
