//https://codeforces.com/problemset/problem/220/A


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<int> b = a;
    sort(b.begin(), b.end());

    vector<int> diff;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i])
            diff.push_back(i);
    }

    if (diff.size() == 0) 
    {
        cout << "YES\n"; 
    } 
    else if (diff.size() == 2) 
    {
        swap(a[diff[0]], a[diff[1]]);
        if (a == b)
            cout << "YES\n"; 
        else
            cout << "NO\n";
    } 
    else 
    {
        cout << "NO\n";
    }
    return 0;
}
