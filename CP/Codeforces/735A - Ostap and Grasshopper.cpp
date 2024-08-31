// https://codeforces.com/problemset/problem/735/A


#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string line;
    cin >> line;

    int start = line.find('G');
    int target = line.find('T');

    for (int pos = start; pos < n; pos += k) {
        if (pos == target) {
            cout << "YES" << endl;
            return 0;
        }
        if (line[pos] == '#') break;
    }

    for (int pos = start; pos >= 0; pos -= k) {
        if (pos == target) {
            cout << "YES" << endl;
            return 0;
        }
        if (line[pos] == '#') break;
    }

    cout << "NO" << endl;
    return 0;
}
