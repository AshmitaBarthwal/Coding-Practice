//https://www.geeksforgeeks.org/problems/finding-the-numbers0215/1



class Solution {
  public:
    vector<int> singleNum(vector<int>& arr) {
          unordered_map<int,int>mpp;
        vector<int>v;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        for(auto it:mpp){
            if(it.second==1){
                v.push_back(it.first);
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};
