// https://codeforces.com/problemset/problem/119/A


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    while (true) {
        int simonMove = __gcd(a, n);
        if (n < simonMove) {
            cout << "1" << endl;
            break;
        }
        n -= simonMove;

        int antisimonMove = __gcd(b, n);
        if (n < antisimonMove) {
            cout << "0" << endl;
            break;
        }
        n -= antisimonMove;
    }

    return 0;
}
