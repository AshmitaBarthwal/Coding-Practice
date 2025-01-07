//https://codeforces.com/problemset/problem/2001/A


#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nline endl

void solve()
{
    ll n;
    cin >> n;

    ll arr[n];
    unordered_map<ll, ll> hMap;

    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
        hMap[arr[i]]++;
    }

    ll maxFreq = 0;
    for (auto itr : hMap)
        maxFreq = max(maxFreq, itr.second);

    cout << (n - maxFreq) << nline;
}

int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
