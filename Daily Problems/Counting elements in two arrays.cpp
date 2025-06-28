//https://www.geeksforgeeks.org/problems/counting-elements-in-two-arrays/1



class Solution {
  public:
    vector<int> countLessEq(vector<int>& a, vector<int>& b) 
    {
        int maxi = 0;
        for(int i = 0;i<b.size();i++){
            maxi = max(maxi,b[i]);
        }
        
        vector<int> Store(maxi+1,0);
        
        for(int i = 0;i<b.size();i++){
            Store[b[i]]++;
        }
        
        for(int i = 1;i<=maxi;i++){
            Store[i]+=Store[i-1];
        }
        
        vector<int> ans;
        for(int i = 0;i<a.size();i++){
            if(a[i]>maxi){
                ans.push_back(b.size());
                continue;
            }
            ans.push_back(Store[a[i]]);
        }
        
        return ans;
    }
};
