//https://www.geeksforgeeks.org/problems/trail-of-ones3242/1



class Solution {
  public:
    int countConsec(int n) {
        if(n == 2) return 1;
      
      int prev = 0 ;
      int curr = 1;
      int nex ;
      int ans = 1;
      for(int i = 3 ; i<=n ; i++){
          nex = prev+curr;
          ans =  ans * 2 + nex ; 
          prev = curr;
          curr = nex;
          
      }
      return ans ;
    }
};
