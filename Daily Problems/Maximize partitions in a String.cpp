//https://www.geeksforgeeks.org/problems/maximize-partitions-in-a-string/1



class Solution {
  public:
    int maxPartitions(string &s) 
    {
         int n=s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]=i;
            
        }
        int end=0,cnt=0;;
        for(int i=0;i<n;i++)
        {
            end=max(mp[s[i]],end);
            if(i==end)
            {
                cnt++;
            }
            
        }
        return cnt;
        
    }
};
