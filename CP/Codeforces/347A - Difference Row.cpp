//https://codeforces.com/problemset/problem/347/A


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Sort the array to arrange lexicographically smallest sequence
    sort(a.begin(), a.end());

    vector<int> result;

    // Use two pointers to create the required sequence
    int left = 0, right = n - 1;
    while (left <= right) {
        if (left == right) {
            result.push_back(a[right]);
        } else {
            result.push_back(a[right]);
            result.push_back(a[left]);
        }
        --right;
        ++left;
    }

    // Reverse the result to get lexicographically smallest sequence
    reverse(result.begin(), result.end());

    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}

