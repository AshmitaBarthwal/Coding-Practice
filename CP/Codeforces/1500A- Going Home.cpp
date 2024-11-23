// https://codeforces.com/problemset/problem/1500/A


#include <bits/stdc++.h>
using namespace std;
const int N = 5e6 + 1;
int a[N], x[N], y[N];
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    bool found = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int s = a[i] + a[j];
            if (x[s] > 0 && y[s] > 0 && x[s] != i && y[s] != j && x[s] != j && y[s] != i)
            {
                found = 1;
                cout << "YES\n"
                     << i << " " << j << " " << x[s] << " " << y[s];
                i = n + 1, j = n + 1;
            }
            x[s] = i, y[s] = j;
        }
    }
    if (!found)
    {
        cout << "NO";
    }
    return 0;
}
