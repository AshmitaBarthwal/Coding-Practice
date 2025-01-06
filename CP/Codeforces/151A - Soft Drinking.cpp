//https://codeforces.com/problemset/problem/151/A



#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    // Calculate total resources
    int total_drink = k * l;
    int total_slices = c * d;
    int total_salt = p;

    // Calculate the number of toasts each resource can provide
    int toasts_drink = total_drink / nl;
    int toasts_lime = total_slices;
    int toasts_salt = total_salt / np;

    // Determine the maximum number of toasts possible
    int max_toasts = min({toasts_drink, toasts_lime, toasts_salt});

    // Calculate toasts per friend
    int toasts_per_friend = max_toasts / n;

    cout << toasts_per_friend << endl;

    return 0;
}
