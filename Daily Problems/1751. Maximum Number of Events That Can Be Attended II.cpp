//https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended-ii/description/?envType=daily-question&envId=2025-07-08



class Solution {
public:
    int maxValue(vector<vector<int>>& events, int k) 
    {
        sort(events.begin(), events.end());
        return dfs(events, 0, -1, k);
    }

    int dfs(vector<vector<int>>& ev, int i, int lastEnd, int k) 
    {
        if (i == ev.size() || k == 0) return 0;
        int take = 0;
        if (ev[i][0] > lastEnd) take = ev[i][2] + dfs(ev, i + 1, ev[i][1], k - 1);
        int skip = dfs(ev, i + 1, lastEnd, k);
        return max(take, skip);
};
