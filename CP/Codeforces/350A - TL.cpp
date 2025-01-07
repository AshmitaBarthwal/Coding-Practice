//https://codeforces.com/problemset/problem/350/A




#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> correct(n), wrong(m);
    for (int i = 0; i < n; ++i) cin >> correct[i];
    for (int i = 0; i < m; ++i) cin >> wrong[i];

    int max_correct = *max_element(correct.begin(), correct.end());
    int min_correct = *min_element(correct.begin(), correct.end());
    int min_wrong = *min_element(wrong.begin(), wrong.end());

    int v = max(2 * min_correct, max_correct);

    if (v < min_wrong) {
        cout << v << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
