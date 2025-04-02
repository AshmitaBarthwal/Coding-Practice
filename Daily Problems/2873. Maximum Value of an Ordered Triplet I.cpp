//https://leetcode.com/problems/maximum-value-of-an-ordered-triplet-i/submissions/1594017282/?envType=daily-question&envId=2025-04-02



class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) 
    {
        long long maxi = 0;
        int n = nums.size();
        
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    long long val = (long long)(nums[i] - nums[j]) * nums[k];
                    maxi = max(maxi, val);
                }
            }
        }
        
        return maxi;
    }
};
