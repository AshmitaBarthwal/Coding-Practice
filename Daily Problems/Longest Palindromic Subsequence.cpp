//https://www.geeksforgeeks.org/problems/longest-palindromic-subsequence-1612327878/1



class Solution {
  public:
     int lcs(string &s1, string &s2) {
        int n=s1.length();
        int m=s2.length();
        //base case when i==n || j==m  return 0
        vector<int> next(m+1,0),cur(m+1,0);
        
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(s1[i]==s2[j])
                cur[j]=1 + next[j+1];
                
                else
                cur[j]=max(next[j],cur[j+1]);
            }
            next=cur;
        }
        
        return next[0];
    }
    
    
    int longestPalinSubseq(string &s) {
        string os = s;
        reverse(s.begin(),s.end());
        return lcs(os,s);
    }
};
