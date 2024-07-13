// https://leetcode.com/problems/powx-n/description/


//Brute: Multiplying x by itself n times
//Time: O(n)
//Space: O(logn)
class Solution {
public:
    double myPow(double x, int num) {
        double n = static_cast<double>(num);
        double power = 1;
        if(n < 0){
            x = 1/x;
            n = -n;
        }
        for(double i=1;i<=n;i++) power *= x;
        return power;
    }
};


//Better: Using recursion
//Time: O(logn)
//Space: O(logn)
class Solution {
public:
    double myPow(double x, int num) {
        long n = static_cast<long>(num);
        if(n==0) return 1;
        if (n < 0) {
            x = 1 / x;
            n = -n;
        }
        double half = myPow(x, n/2);
        if(n%2==0) return half * half;
        return half * half * x;
    }
};
