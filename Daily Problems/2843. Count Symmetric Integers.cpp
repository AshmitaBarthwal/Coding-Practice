//https://leetcode.com/problems/count-symmetric-integers/?envType=daily-question&envId=2025-04-11



class Solution {
public:
    int countSymmetricIntegers(int low, int high) 
    {
        int ans=0;
        for(int i=low;i<=high;i++)
        {
            string s=to_string(i);
            int t=0,n=s.size();
            if(n%2!=0)
                continue;
            for(int j=0;j<n/2;j++)
            {
                t+=s[j]-s[n-j-1];
            }
            if(t==0)
                ans++;
        }
        return ans;
    }
};
