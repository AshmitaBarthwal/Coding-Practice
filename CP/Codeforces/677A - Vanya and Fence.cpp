// https://codeforces.com/problemset/problem/677/A


#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, h;
    cin >> n >> h;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int w = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > h) {
            w += 2; // Needs to bend down
        } else {
            w += 1; // Can walk normally
        }
    }
    
    cout << w << endl;
    
    return 0;
}
