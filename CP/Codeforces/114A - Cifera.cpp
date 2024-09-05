//https://codeforces.com/problemset/problem/114/A


#include <iostream>
using namespace std;

int main() {
    long long k, l;
    cin >> k >> l;

    int importance = 0;
    while (l % k == 0) {
        l /= k;
        importance++;
    }

    if (l == 1) {
        cout << "YES" << endl;
        cout << importance - 1 << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
