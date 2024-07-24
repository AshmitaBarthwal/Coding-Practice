// https://leetcode.com/problems/power-of-two/description/

//Time: O(1)
//Space: O(1)
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n >= 1 && (n & (n - 1)) == 0) return true;
        return false;
    }
};
