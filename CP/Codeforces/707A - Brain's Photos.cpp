// https://codeforces.com/problemset/problem/707/A



#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    bool isColor = false;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            char pixel;
            cin >> pixel;
            if (pixel == 'C' || pixel == 'M' || pixel == 'Y') {
                isColor = true;
            }
        }
    }
    
    if (isColor) {
        cout << "#Color" << endl;
    } else {
        cout << "#Black&White" << endl;
    }
    
    return 0;
}
