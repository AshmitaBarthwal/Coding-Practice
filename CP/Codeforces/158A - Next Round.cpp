//https://codeforces.com/problemset/problem/158/A



#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int threshold = scores[k - 1]; // The k-th place score
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (scores[i] >= threshold && scores[i] > 0) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
