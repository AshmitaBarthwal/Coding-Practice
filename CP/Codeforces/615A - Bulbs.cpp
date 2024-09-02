// https://codeforces.com/problemset/problem/615/A


#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    set<int> bulbs;
    
    for (int i = 0; i < n; i++) {
        int xi;
        cin >> xi;
        for (int j = 0; j < xi; j++) {
            int bulb;
            cin >> bulb;
            bulbs.insert(bulb);
        }
    }
    
    if (bulbs.size() == m) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
