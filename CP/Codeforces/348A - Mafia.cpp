//https://codeforces.com/problemset/problem/348/A



#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Calculate the total rounds required
    long long sumRounds = accumulate(a.begin(), a.end(), 0LL);
    long long maxRounds = *max_element(a.begin(), a.end());

    // Minimum rounds needed is the maximum of these two values
    long long result = max(maxRounds, (sumRounds + n - 2) / (n - 1));

    cout << result << endl;

    return 0;
}
