//https://codeforces.com/problemset/problem/1916/A


#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

typedef long long ll;
typedef double db;

int main() 
{
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> v;
        ll check = 0;
        ll prod = 1;
        
        for (ll i = 0; i < n; i++) {
            ll x;
            cin >> x;
            v.push_back(x);
            
            if (v[i] == 1 || v[i] == 7 || v[i] == 17 || v[i] == 119 || v[i] == 289 || v[i] == 2023) {
                check += 1;
            }
            prod *= v[i];
        }
        
        if (check != n) {
            cout << "NO" << endl;
        } else {
            db divide = (db)2023 / (db)prod;
            if (ceil(divide) != floor(divide)) {
                cout << "NO" << endl;
            } else {
                vector<ll> ans(k);
                ans[0] = (ll)divide;
                for (ll i = 1; i < k; i++) {
                    ans[i] = 1;
                }
                cout << "YES" << endl;
                for (auto i : ans) {
                    cout << i << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
