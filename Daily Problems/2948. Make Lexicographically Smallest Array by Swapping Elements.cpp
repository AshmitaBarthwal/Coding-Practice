//https://leetcode.com/problems/make-lexicographically-smallest-array-by-swapping-elements/



class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) 
    {
        int n = nums.size(); 
        vector<pair<int, int>> vec(n); 
        for(int i = 0; i < n; i++) { 
            vec[i].first = nums[i]; 
            vec[i].second = i; 
        } 
        int low = 0; 
        sort(vec.begin(), vec.end()); 
        vector<int> new_sorting(n); 
        new_sorting[0] = vec[0].second; 
        for(int i = 1; i < n; i++) { 
            if(abs(vec[i].first - vec[i-1].first) > limit) { 
                sort(new_sorting.begin() + low, new_sorting.begin() + i); 
                low = i; 
            } 
            new_sorting[i] = vec[i].second; 
        } 
        sort(new_sorting.begin() + low, new_sorting.end()); 
        vector<int> ans(n); 
        for(int i = 0; i < n; i++) { 
            ans[new_sorting[i]] = vec[i].first; 
        } 
        return ans;

    }
};
