//https://www.geeksforgeeks.org/problems/search-in-an-almost-sorted-array/1



// User function Template for C++
class Solution {
  public:
    int findTarget(vector<int>& arr, int target) 
    {
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==target)
            {
                return i;
            }
        }
        return -1;
    }
};
