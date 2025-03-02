//https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/description/



class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) 
    {
        unordered_map<int, int> mp;

        for (auto row : nums1) mp[row[0]] += row[1];
        for (auto row : nums2) mp[row[0]] += row[1];

        vector<vector<int>> res;
        for (auto [id, val] : mp) res.push_back({id, val});

        sort(res.begin(), res.end());
        return res;
    }
};
