//https://leetcode.com/problems/find-the-maximum-length-of-valid-subsequence-i/?envType=daily-question&envId=2025-07-16



class Solution {
public:
    int maximumLength(vector<int>& nums)
    {
        int allev = 0, allodd = 0, oddev = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                allev++;
            } else {
                allodd++;
            }
        }
        bool expectOdd = true;
        bool expectEven = true;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0 && expectEven) {
                oddev++;
                expectEven = false;
                expectOdd = true;
            } else if (nums[i] % 2 != 0 && expectOdd) {
                oddev++;
                expectOdd = false;
                expectEven = true;
            }
        }

        return max({allev, allodd, oddev});
    }
};
