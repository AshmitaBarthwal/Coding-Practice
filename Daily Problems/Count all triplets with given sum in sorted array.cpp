//https://www.geeksforgeeks.org/problems/count-all-triplets-with-given-sum-in-sorted-array/1


class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) 
    {
         int n = arr.size(), ans = 0;
        unordered_map<int, int> mp;
        for(auto& i : arr) mp[i]++;
        for(int i = 0; i < n; i++){
            mp[arr[i]]--;
            for(int j = 0; j < i; j++){
                if(mp.find(target - arr[i] - arr[j]) != mp.end()){
                    ans += mp[target - arr[i] - arr[j]];
                }
            }
        }
        return ans;
    }
};
