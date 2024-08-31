// https://codeforces.com/problemset/problem/71/A


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    for (int i = 0; i < n; i++) {
        cin >> s;
        int length = s.length();
        if (length > 10) {
            cout << s[0] << length - 2 << s[length - 1] << endl;
        } else {
            cout << s << endl;
        }
    }
    return 0;
}
