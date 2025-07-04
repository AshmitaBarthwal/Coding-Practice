//https://leetcode.com/problems/alternating-groups-ii/?envType=daily-question&envId=2025-03-09



class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) 
    {
        int ans = 0, cnt = 1, n = colors.size();
        for(int i = 1; i < (n + k - 1); i++) {
            if(colors[i % n] != colors[(i - 1) % n]) {
                cnt++;
            }
            else cnt = 1;
            if(cnt >= k) ans++;
        }
        return ans;
    }
};
