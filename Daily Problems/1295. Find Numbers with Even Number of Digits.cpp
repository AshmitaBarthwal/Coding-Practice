//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/description/?envType=daily-question&envId=2025-04-30



class Solution {
public:
    int findNumbers(vector<int>& nums) 
    {
        int c = 0;
        for (int i : nums) 
        {
            string s = to_string(i);
            if (s.size() % 2 == 0) c++;
        }
        return c;
    }
};
