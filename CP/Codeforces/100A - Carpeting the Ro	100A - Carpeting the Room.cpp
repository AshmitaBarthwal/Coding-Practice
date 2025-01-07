//https://codeforces.com/problemset/problem/100/A



#include <iostream>
using namespace std;

int main() {
    int n, k, n1;
    cin >> n >> k >> n1;

    if (k * n1 * n1 >= n * n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
