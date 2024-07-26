// https://www.geeksforgeeks.org/problems/set-the-rightmost-unset-bit4436/1

//Time: O(1)
//Space: O(1)
class Solution {
  public:
    int setBit(int n) {
        return n | (n+1);
    }
};
