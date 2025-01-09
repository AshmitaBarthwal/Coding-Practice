//https://codeforces.com/problemset/problem/26/A



#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, amount = 0;
    cin >> n;

    vector<bool> b(n + 1, false);
    vector<int> pfactors(n + 1, 0);

    for (int i = 2; i <= n; ++i) {
        if (!b[i]) {
            for (int j = i + i; j <= n; j += i) {
                b[j] = true;
                pfactors[j] += 1;
            }
        }

        if (pfactors[i] == 2) {
            amount += 1;
        }
    }

    cout << amount << endl;

    return 0;
}
