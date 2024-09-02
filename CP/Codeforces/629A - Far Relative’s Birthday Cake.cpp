// https://codeforces.com/problemset/problem/629/A


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> cake(n);
    for (int i = 0; i < n; i++) {
        cin >> cake[i];
    }
    
    int happiness = 0;
    
    for (int i = 0; i < n; i++) {
        int chocolates = 0;
        for (int j = 0; j < n; j++) {
            if (cake[i][j] == 'C') {
                chocolates++;
            }
        }
        happiness += (chocolates * (chocolates - 1)) / 2;
    }
    
    for (int j = 0; j < n; j++) {
        int chocolates = 0;
        for (int i = 0; i < n; i++) {
            if (cake[i][j] == 'C') {
                chocolates++;
            }
        }
        happiness += (chocolates * (chocolates - 1)) / 2;
    }
    
    cout << happiness << endl;
    return 0;
}
