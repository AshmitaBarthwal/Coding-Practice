//https://www.geeksforgeeks.org/problems/sum-of-all-substrings-of-a-number-1587115621/1



class Solution {
  public:
    int sumSubstrings(string &s) 
    {
           int n=s.size();
           int sum=0;
            for(int i=0;i<n;i++)
            {
               string temp="";
                for(int j=i;j<n;j++)
                {
                temp+=s[j];
                sum+=stoi(temp);
                }
            }
            return sum;
    }
};
