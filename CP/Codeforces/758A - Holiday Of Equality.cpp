// https://codeforces.com/problemset/problem/758/A


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> welfare(n);
    for (int i = 0; i < n; i++) {
        cin >> welfare[i];
    }

    int max_welfare = *max_element(welfare.begin(), welfare.end());
    int total_cost = 0;

    for (int i = 0; i < n; i++) {
        total_cost += (max_welfare - welfare[i]);
    }

    cout << total_cost << endl;
    return 0;
}
