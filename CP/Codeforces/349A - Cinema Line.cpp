//https://codeforces.com/problemset/problem/349/A



#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> bills(n);
    for (int i = 0; i < n; ++i) {
        cin >> bills[i];
    }

    int count25 = 0, count50 = 0;

    for (int bill : bills) {
        if (bill == 25) {
            ++count25;
        } else if (bill == 50) {
            if (count25 > 0) {
                --count25;
                ++count50;
            } else {
                cout << "NO" << endl;
                return 0;
            }
        } else if (bill == 100) {
            if (count50 > 0 && count25 > 0) {
                --count50;
                --count25;
            } else if (count25 >= 3) {
                count25 -= 3;
            } else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
    return 0;
}
