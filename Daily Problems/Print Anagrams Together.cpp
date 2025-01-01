//https://www.geeksforgeeks.org/problems/print-anagrams-together/1


class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) 
    {
        vector<vector<string>>ans;
         unordered_map<string,vector<string>>mp;
         for(auto &s:arr){
             string b=s;
             sort(b.begin(),b.end());
                 mp[b].push_back(s);
    
         }
         
         for(auto &pr:mp){
             ans.push_back(pr.second);
         }
         return ans;
    }
};
