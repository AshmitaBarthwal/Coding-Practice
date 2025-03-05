//https://www.geeksforgeeks.org/problems/longest-string-chain/1



class Solution 
{
  public:
    static bool comp(string &s1, string &s2)
    {
        return s1.size() < s2.size();
    }
  
    int longestStringChain(vector<string>& words) 
    {
        
        sort(words.begin(), words.end(), comp);
        unordered_map<string,int> mp;
        int ans = 1;
        for(string &w : words)
        {
            int length = 1;
            for(int i = 0; i < w.size(); i++)
            {
                string pred = w.substr(0,i) + w.substr(i+1);
                if(mp.find(pred) != mp.end())
                {
                    length = max(length,mp[pred]+1);
                }
            }
            mp[w]=length;
            ans = max(ans,length);
        }
        return ans;
        
    }
};
