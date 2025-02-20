//https://leetcode.com/problems/find-unique-binary-string/description/



class Solution 
{
public:
    string findDifferentBinaryString(vector<string>& nums) 
    {
        int n = nums.size();
        string res = "";
        for (int i = 0; i < n; i++) 
        {
            // Flip the i-th character of the i-th string (0 -> 1, 1 -> 0)
            res += (nums[i][i] == '0') ? '1' : '0';
        }
        return res;
    }
};
