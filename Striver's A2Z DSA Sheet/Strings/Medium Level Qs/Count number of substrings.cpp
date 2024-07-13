# https://www.geeksforgeeks.org/problems/count-number-of-substrings4528

class Solution
{
  public:
    long long int solve(string s , int k)
    {
        long long ans = 0;
        int cnt = 0;
        int i = 0 , j = 0;
        int size = s.size();
        
        vector<int>mp(26 , 0);
        
        while(j < size)
        {
            mp[s[j] - 'a']++;
            
            if(mp[s[j] - 'a'] == 1) cnt++;
            
             while(cnt > k)
             {
                mp[s[i] - 'a']--;
                
                if(mp[s[i] - 'a'] <= 0)
                {
                    cnt--;
                }
                
                i++;
            }
            
            ans += j-i+1;
            j++;
        }
        
        return ans;
    }
  
    long long int substrCount (string s, int k) {
        
        return solve(s , k) - solve(s , k-1);
        
    }
};
