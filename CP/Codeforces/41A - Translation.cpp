//https://codeforces.com/problemset/problem/41/A


#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    // Reverse the string s
    string reversed_s = string(s.rbegin(), s.rend());

    // Check if the reversed string is equal to t
    if (reversed_s == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
