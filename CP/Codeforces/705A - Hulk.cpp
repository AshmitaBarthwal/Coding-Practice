// https://codeforces.com/problemset/problem/705/A


#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    string feelings;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            feelings += "I hate";
        } else {
            feelings += "I love";
        }
        if (i != n - 1) {
            feelings += " that ";
        }
    }
    feelings += " it";
    
    cout << feelings << endl;
    return 0;
}
