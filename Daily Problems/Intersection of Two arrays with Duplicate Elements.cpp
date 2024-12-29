//https://www.geeksforgeeks.org/problems/intersection-of-two-arrays-with-duplicate-elements/1


class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) 
    {
         set<int> st,s;
        int n=a.size();
        int m=b.size();
        
        for(int i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        
        for(int i=0;i<m;i++)
        {
            if(s.find(b[i])!=s.end())
                st.insert(b[i]);
        }
        
        vector<int> ans(st.begin(),st.end());
        
        return ans;
    }
};
