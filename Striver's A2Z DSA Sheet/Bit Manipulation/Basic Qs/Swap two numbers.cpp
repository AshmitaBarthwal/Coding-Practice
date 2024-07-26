// https://www.geeksforgeeks.org/problems/swap-two-numbers3844/1

//Time: O(1)
//Space: O(1)
class Solution{   
public:
    pair<int, int> get(int a, int b){
        a=a^b;
        b=a^b;
        a=a^b;
        return {a,b};
    }
};
