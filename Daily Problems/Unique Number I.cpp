//https://www.geeksforgeeks.org/problems/find-unique-number/1



class Solution {
  public:
    int findUnique(vector<int> &arr) 
    {
        int ans=0;

        for(auto &ele: arr)

           ans ^= ele;

        return ans;
    }
};
