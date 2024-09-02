// https://codeforces.com/problemset/problem/61/A


#include <iostream>
using namespace std;

int main() {
    string num1, num2, result;
    cin >> num1 >> num2;

    for (int i = 0; i < num1.length(); i++) {
        if (num1[i] == num2[i]) {
            result += '0';
        } else {
            result += '1';
        }
    }

    cout << result << endl;
    return 0;
}
