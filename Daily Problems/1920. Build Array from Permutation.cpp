//https://leetcode.com/problems/build-array-from-permutation/?envType=daily-question&envId=2025-05-06



class Solution {
public:
    vector<int> buildArray(vector<int>& nums) 
    {
        vector <int> temp(nums.size(), 0);
        for (int i = 0 ; i < nums.size() ; i++) {
            temp[i] = nums[nums[i]];
        }
        return temp;
    }
}
