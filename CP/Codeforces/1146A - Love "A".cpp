//https://codeforces.com/problemset/problem/1146/A


#include <iostream>
#include <string>
using namespace std;

int main() {
    string s; 
    cin >> s; 
    int cnta = 0; 
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a') {
            cnta++;
        }
    }
    if (cnta > (s.size() - cnta)) {
        cout << s.size(); 
        return 0;
    }
    cout << cnta + (cnta - 1);
    return 0;
}
