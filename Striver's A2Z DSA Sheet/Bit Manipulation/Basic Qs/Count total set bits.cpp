//https://www.geeksforgeeks.org/problems/count-total-set-bits-1587115620/1

//Time: O(log n)
//Space: O(log n)

class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int PowOf2(int n){
        
        int x = 0;
        while((1 << x) <= n) x++;
        return x - 1;
        
    }
    
    public:
    
    int countSetBits(int n){
        
        if(n == 0) return 0;
        
        int x = PowOf2(n);
        int y = x * (1 << (x - 1));
        int z = n - (1 << x);
        
        return y + z + 1 + countSetBits(z);
        
    }
};
