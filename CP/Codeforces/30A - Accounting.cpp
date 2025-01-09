//https://codeforces.com/problemset/problem/30/A



#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B, n;
    cin >> A >> B >> n;

    if (A == 0) {
        if (B == 0) {
            cout << 5 << endl; // Any value works
        } else {
            cout << "No solution" << endl;
        }
        return 0;
    }

    if (B % A != 0) {
        cout << "No solution" << endl;
        return 0;
    }

    int target = B / A;
    for (int X = -2000; X <= 2000; ++X) {
        long long power = 1;
        bool valid = true;

        for (int i = 0; i < n; ++i) {
            power *= X;
            if (abs(power) > abs(target)) { // Stop if it exceeds target
                valid = false;
                break;
            }
        }

        if (valid && power == target) {
            cout << X << endl;
            return 0;
        }
    }

    cout << "No solution" << endl;
    return 0;
}
