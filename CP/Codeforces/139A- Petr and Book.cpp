// https://codeforces.com/contest/139/problem/A


#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> num(7);
    for (int i = 0; i < 7; i++) {
        cin >> num[i];
    }

    int i = 0;
    int sum = 0;
    while (sum < n) {
        sum += num[i];
        if (sum >= n) {
            break;
        }
        i = (i + 1) % 7; // Move to the next day, wrap around after Sunday
    }

    cout << i + 1 << endl; // Output the day of the week (1-based index)
    return 0;
}
