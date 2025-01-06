//https://codeforces.com/problemset/problem/1111/A


#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    string ss, tt;
    cin >> ss >> tt;

    if (ss.length() != tt.length()) {
        cout << "No" << endl;
        return 0;
    }

    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

    for (size_t i = 0; i < ss.length(); ++i) {
        if (vowels.count(ss[i]) != vowels.count(tt[i])) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
