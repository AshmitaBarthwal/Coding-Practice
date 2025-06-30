//https://leetcode.com/problems/longest-harmonious-subsequence/description/?envType=daily-question&envId=2025-06-30



class Solution {
public:
    int findLHS(vector<int>& nums) 
    {
            unordered_map<int, int> freq;
            for (int num : nums) freq[num]++;
            
            int maxi = 0;
            for (auto& [num, count] : freq) 
            {
                if (freq.count(num + 1))
                {
                    maxi = max(maxi, count + freq[num + 1]);
                }
            }
            return maxi;
    }
};
