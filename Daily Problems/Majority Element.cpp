//https://www.geeksforgeeks.org/problems/majority-element-1587115620/1



// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        unordered_map<int,int> mpp;
        
        for(auto val:arr){
            mpp[val]++;
        }
        
        for(auto it:mpp){
            if(it.second>arr.size()/2) return it.first;
        }
        return -1;
        
    }
};
