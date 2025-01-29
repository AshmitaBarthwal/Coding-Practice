//https://www.geeksforgeeks.org/problems/powx-n/1



class Solution 
{
  public:
    double power(double b, int e) 
    {
        if(b == 0) return 0.0;
        if(e == 0) return 1;
        bool isNegative = false;
        if(e < 0) {
            isNegative = true;
            e = abs(e);
        }
        double ans = 1;
       
        while(e > 0){
            if(e % 2 == 1) ans *= b;
            b *= b;
            e /= 2;
        }
        if(isNegative){
            ans = 1 / ans;
        }
        
        return ans;
    }
};
