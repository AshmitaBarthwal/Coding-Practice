// https://codeforces.com/problemset/problem/894/A


#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int countQAQ = 0;
    int n = s.length();

    // Brute force approach with three nested loops
    for (int i = 0; i < n; ++i) {
        if (s[i] == 'Q') {
            for (int j = i + 1; j < n; ++j) {
                if (s[j] == 'A') {
                    for (int k = j + 1; k < n; ++k) {
                        if (s[k] == 'Q') {
                            countQAQ++;
                        }
                    }
                }
            }
        }
    }

    cout << countQAQ << endl;

    return 0;
}
