//https://leetcode.com/problems/divisible-and-non-divisible-sums-difference/?envType=daily-question&envId=2025-05-27



class Solution {
public:
    int differenceOfSums(int n, int m) 
    {
        int num1 = 0, num2 = 0;        
        for(int i = 1; i <= n; i++){
            if(i % m != 0){
                num1 += i;
            }else if(i % m == 0){
                num2 += i;
            }
        }        
        return num1 - num2;
    }
};
