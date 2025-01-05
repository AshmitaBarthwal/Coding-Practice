//https://codeforces.com/problemset/problem/32/B


#include <iostream>
#include <string>
using namespace std;

int main() {
    string b, d = "";
    cin >> b;
    for (size_t i = 0; i < b.length(); ++i) {
        if (b[i] == '.') d += '0';
        else if (b[i] == '-' && b[i + 1] == '.') d += '1', ++i;
        else if (b[i] == '-' && b[i + 1] == '-') d += '2', ++i;
    }
    cout << d << endl;
    return 0;
}
