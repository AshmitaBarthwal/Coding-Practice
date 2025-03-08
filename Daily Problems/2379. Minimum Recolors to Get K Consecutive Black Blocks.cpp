//https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/description/?envType=daily-question&envId=2025-03-08



class Solution {
public:
    int minimumRecolors(string blocks, int k) 
    {
        int w = 0, res;

        for (int i = 0; i < k; i++) 
            if (blocks[i] == 'W') w++;

        res = w;

        for (int i = k; i < blocks.size(); i++) {
            if (blocks[i - k] == 'W') w--;
            if (blocks[i] == 'W') w++;
            res = min(res, w);
        }

        return res;
    }
};
