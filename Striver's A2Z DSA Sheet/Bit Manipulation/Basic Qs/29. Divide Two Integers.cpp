// https://leetcode.com/problems/divide-two-integers/description/


//Time: O((log n) ^ 2)
//Space: O(1)

class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == divisor) return 1;
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        if (dividend == 0) return 0;
        if (divisor == 1) return dividend;
        if (divisor == -1) return -dividend;

        bool sign = (dividend >= 0) == (divisor >= 0);
        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);

        int ans = 0;
        while (n >= d) {
            int count = 0;
            while (n >= (d << (count + 1))) {
                count++;
            }
            ans += (1 << count);
            n -= (d << count);
        }

        return sign ? ans : -ans;
    }
};
