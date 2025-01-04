//https://codeforces.com/problemset/problem/1131/A


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long x, y, l, r, k, z, ans;
    
    cin >> x >> y >> l >> r;
    k = y + r;
    z = max(x, l);
    ans = (k + 2) * 2 + z * 2;

    cout << ans << endl;

    return 0;
}
