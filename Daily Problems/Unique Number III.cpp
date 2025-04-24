//https://www.geeksforgeeks.org/problems/find-element-occuring-once-when-all-other-are-present-thrice/1



// User function Template for C++

class Solution {
  public:
    int getSingle(vector<int> &arr) 
    {
        int n=arr.size();
        int c=-1;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second==1)
            {
                c=it.first;
                break;
            }
        }
        return c;
    }
};
