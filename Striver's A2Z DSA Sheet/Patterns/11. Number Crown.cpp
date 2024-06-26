# https://www.naukri.com/code360/problems/number-crown_6581894?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM
#include <iostream>
using namespace std;

void numberCrown(int n) 
{
    int spaces = 2 * (n - 1);
    for (int i = 1; i <= n; i++) 
    {
        // Print increasing part
        for (int j = 1; j <= i; j++) 
        {
            cout << j << " ";
        }
        
        // Print spaces
        for (int j = 1; j <= spaces; j++) 
        {
            cout << " ";
        }
        
        // Print decreasing part
        for (int j = i; j >= 1; j--) 
        {
            cout << j << " ";
        }
        
        cout << endl;
        spaces -= 2;
    }
}
