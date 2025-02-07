//https://leetcode.com/problems/find-the-number-of-distinct-colors-among-the-balls/description/



class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        unordered_map<int, int> ballcolor;
        unordered_map<int, int> color;
        unordered_set<int> diff;
        vector<int> result;

        for (const auto& query : queries) {
            int ball = query[0];
            int clr = query[1];

            if (ballcolor.count(ball) > 0) {
                int old_clr = ballcolor[ball];
                color[old_clr]--;
                if (color[old_clr] == 0) {
                    diff.erase(old_clr);
                }
            }

            ballcolor[ball] = clr;
            color[clr]++;
            diff.insert(clr);

            result.push_back(diff.size());
        }

        return result;
    }
};
