//https://www.geeksforgeeks.org/problems/longest-subarray-with-majority-greater-than-k/1



// User function Template for C++
class Solution {
  public:
    int longestSubarray(vector<int> &arr, int k) 
    {
       int maxi = 0;
       unordered_map<int,int>mp;
       int count = 0;
       for(int i = 0;i<arr.size();i++)
       {
           if(arr[i] <= k)count--;
           else count++;
           if(count > 0)
           {
               maxi = max(maxi,i+1);
           }
           int y = count - 1;
           if(mp.find(y) != mp.end())
           {
               maxi = max(maxi,i-mp[y]);
           }
           if(mp.find(count) == mp.end())
           {
               mp[count] = i;
           }
       }
       
       return maxi;
    }
};
