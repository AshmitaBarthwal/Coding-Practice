//https://leetcode.com/problems/number-of-ways-to-split-array/description/


class Solution {
public:
    int waysToSplitArray(vector<int>& nums) 
    {
       long long total_sum = 0, left_sum = 0;
        int n = nums.size();
        int count = 0;
        
        for (int num : nums) {
            total_sum += num;
        }
        
        for (int i = 0; i < n - 1; i++) {
            left_sum += nums[i];
            long long right_sum = total_sum - left_sum;
            if (left_sum >= right_sum) {
                count++;
            }
        }
        
        return count;
    }
};
