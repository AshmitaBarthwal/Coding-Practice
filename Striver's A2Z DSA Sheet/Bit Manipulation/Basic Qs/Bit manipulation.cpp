// https://www.geeksforgeeks.org/problems/bit-manipulation-1666686020/1

//Time: O(1)
//Space: O(1)
class Solution {
  public:
    void bitManipulation(int num, int i) 
    {
        cout << ((num >> i-1) & 1) << " ";
        cout << ((1 << i-1) | num) << " ";
        cout << (num & (~(1 << i-1)));
    }
};
