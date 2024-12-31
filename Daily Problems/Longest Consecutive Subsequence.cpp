//https://www.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1


class Solution {
  public:
    int longestConsecutive(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int ans = 1;
        int curr = 1;
        int prev = arr[0];
        for(int i = 1; i < arr.size(); i++){
            if(arr[i] == prev + 1){
                curr++;
                ans = max(ans, curr);
                prev = arr[i];
            }else if(arr[i] == prev){
                continue;
            }else{
                prev = arr[i];
                curr = 1;
            }
        }
        return ans;
    }
};
