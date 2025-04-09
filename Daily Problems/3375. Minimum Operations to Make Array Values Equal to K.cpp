//https://leetcode.com/problems/minimum-operations-to-make-array-values-equal-to-k/description/?envType=daily-question&envId=2025-04-09



class Solution {
public:
    int minOperations(vector<int>& nums, int k) 
    {
        unordered_set<int> st;

        for (int num : nums) 
        {
            if (num < k) return -1;
            if (num > k) st.insert(num);
        }

        return st.size();
    }
};
