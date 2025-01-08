//https://codeforces.com/problemset/problem/347/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> a(n);
    for (long long i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    swap(a[0], a[n - 1]);
    for (long long i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}


