//https://codeforces.com/problemset/problem/177/A1



#include <iostream>
using namespace std;

int main() {
    long long i, j, n, sum = 0;

    cin >> n;
    long long a[n][n];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for (i = 0, j = 0; i < n && j < n; i++, j++) {
        sum += a[i][j];
        a[i][j] = 0;
    }

    for (i = 0, j = n - 1; i < n && j >= 0; i++, j--) {
        sum += a[i][j];
        a[i][j] = 0;
    }

    for (i = 0; i < n; i++) {
        sum += a[n / 2][i];
        a[n / 2][i] = 0;
    }

    for (i = 0; i < n; i++) {
        sum += a[i][n / 2];
        a[i][n / 2] = 0;
    }

    cout << sum;

    return 0;
}
