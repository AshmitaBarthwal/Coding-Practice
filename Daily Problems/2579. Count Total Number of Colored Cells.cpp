//https://leetcode.com/problems/count-total-number-of-colored-cells/description/



class Solution {
public:
    long long coloredCells(int n) 
    {
        return 2LL*n*(n-1)+1;
    }
};
