//https://leetcode.com/problems/find-missing-and-repeated-values/description/



class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        vector<int> ans(n * n + 1, 0);
        
        // Count the occurrences of each number in the grid
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                ans[grid[i][j]]++;
            }
        }
        
        vector<int> res(2, 0);
        // Find the missing and repeated values
        for(int i = 1; i <= n * n; i++)
        {
            if(ans[i] == 2)
            {
                res[0] = i; // Repeated value
            }
            else if(ans[i] == 0)
            {
                res[1] = i; // Missing value
            }
        }
        return res;
    }
};
