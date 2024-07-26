// https://www.geeksforgeeks.org/problems/odd-or-even3618/1


//Brute: Using Bit Manipulation
//Time: O(1)
//Space: O(1)
class Solution{   
public:
    string oddEven(int n){
        return ((n & 1) == 1) ? "odd" : "even";
    }
};
