// https://codeforces.com/problemset/problem/900/A


#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int positive_x = 0, negative_x = 0;
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        if (x > 0)
            positive_x++;
        else if (x < 0)
            negative_x++;
    }

    // Check if there is at most one point on one side of the OY axis
    if (positive_x <= 1 || negative_x <= 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
