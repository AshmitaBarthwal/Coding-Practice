// https://codeforces.com/problemset/problem/69/A


#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int sumX = 0, sumY = 0, sumZ = 0;
    
    for (int i = 0; i < n; ++i) {
        int x, y, z;
        cin >> x >> y >> z;
        sumX += x;
        sumY += y;
        sumZ += z;
    }
    
    // Check if all sums are zero
    if (sumX == 0 && sumY == 0 && sumZ == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
