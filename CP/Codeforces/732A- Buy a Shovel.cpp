// https://codeforces.com/problemset/problem/732/A


#include <iostream>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;
    
    for (int n = 1; n <= 10; ++n) {
        int total_cost = n * k;
        if (total_cost % 10 == 0 || total_cost % 10 == r) {
            cout << n << endl;
            return 0;
        }
    }
    
    return 0;
}
