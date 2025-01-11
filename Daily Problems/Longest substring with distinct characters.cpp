//https://www.geeksforgeeks.org/problems/longest-distinct-characters-in-string5848/1



class Solution {
  public:
    int longestUniqueSubstr(string &s) 
    {
       int n=s.size();
       int ans=0;
       
       for(int i=0;i<n;i++)
       {
          int j=i;
          unordered_set<int> st;
          while(j<n)
          {
              if(st.find(s[j])!=st.end())
              break;
              st.insert(s[j]);
              int mm=st.size();
              ans=max(ans,mm);
              j++;
          }
       }
       return ans;
    }
};
