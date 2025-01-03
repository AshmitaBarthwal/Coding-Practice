//https://codeforces.com/problemset/problem/1176/A


#include <iostream>
using namespace std;

void solve() {
    int q;
    cin >> q;

    while (q--) {
        long long n;
        cin >> n;

        int moves = 0;

        while (n > 1) {
            if (n % 2 == 0) {
                n /= 2;
                moves++;
            } else if (n % 3 == 0) {
                n = 2 * n / 3;
                moves++;
            } else if (n % 5 == 0) {
                n = 4 * n / 5;
                moves++;
            } else {
                moves = -1;
                break;
            }
        }

        cout << moves << endl;
    }
}

int main() {
    solve();
    return 0;
}
