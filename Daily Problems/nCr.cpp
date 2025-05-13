//https://www.geeksforgeeks.org/problems/ncr1019/1



class Solution {
  public:
    int nCr(int n, int r) 
    {
        if (r > n) return 0;
        if (r == 0 || r == n) return 1;

        int lim = Math.min(r, n - r);

        long num = 1;
        for (int i = 0; i < lim; i++) 
        {
            num *= (n - i);
            num /= (i + 1);
        }

        return (int) num;
        
    }
};
