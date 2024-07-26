// https://www.geeksforgeeks.org/problems/find-xor-of-numbers-from-l-to-r/1  


//Brute: Using Bit Manipulation
//Time: O(1)
//Space: O(1)
class Solution {
  public:
  
    int compute(int n){
        if(n % 4 == 1) return 1;
        if(n % 4 == 2) return n+1;
        if(n % 4 == 3) return 0;
        if(n % 4 == 0) return n;
    }
  
    int findXOR(int l, int r) {
        return compute(l-1) ^ compute(r);
    }
};
