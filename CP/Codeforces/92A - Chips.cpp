// https://codeforces.com/problemset/problem/92/A


#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    int i = 1;
    while (m >= i) {
        m -= i;
        i++;
        if (i > n) {
            i = 1; // Start again from the first walrus
        }
    }
    
    cout << m << endl;
    return 0;
}
