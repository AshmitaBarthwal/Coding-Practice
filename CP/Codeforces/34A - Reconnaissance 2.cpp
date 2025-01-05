//https://codeforces.com/problemset/problem/34/A


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, min_diff = 1001, x = 0, y = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) {
        int diff = abs(a[i] - a[(i + 1) % n]);
        if (diff < min_diff) {
            min_diff = diff;
            x = i + 1;
            y = (i + 1) % n + 1;
        }
    }
    cout << x << " " << y << endl;
    return 0;
}
