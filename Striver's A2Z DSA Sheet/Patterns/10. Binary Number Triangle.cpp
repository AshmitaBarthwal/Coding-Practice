# https://www.naukri.com/code360/problems/binary-number-triangle_6581890?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM
#include <iostream>
using namespace std;

void nBinaryTriangle(int n) {
    int start = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) 
            start = 1;
        else 
            start = 0;
        for (int j = 0; j <= i; j++) {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}
