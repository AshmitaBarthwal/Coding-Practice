//https://leetcode.com/problems/find-the-maximum-length-of-valid-subsequence-i/?envType=daily-question&envId=2025-07-16



class Solution {
public:
    int maximumLength(vector<int>& nums)
    {
        int n = nums.size();
        if (n == 0) return 0;

        int maxLength = 1;
        int currentLength = 1;

        for (int i = 1; i < n; ++i) {
            // Check the parity condition between current element and the previous element
            if ((nums[i] + nums[i - 1]) % 2 == (nums[i - 1] + nums[i - 2]) % 2) {
                currentLength++;
            } else {
                currentLength = 2; // Start a new subsequence from the last two elements
            }
            maxLength = max(maxLength, currentLength);
        }

        return maxLength;
    }
};
