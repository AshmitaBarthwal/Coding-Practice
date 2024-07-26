// https://leetcode.com/problems/minimum-bit-flips-to-convert-number/description/

//Time: O(n)
//Space: O(1)

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int result = start^goal, c = 0;
        while(result){
            c += result & 1;
            result >>= 1;
        }
        return count;
    }
};
