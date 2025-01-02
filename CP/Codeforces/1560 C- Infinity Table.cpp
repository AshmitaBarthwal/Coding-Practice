//https://codeforces.com/problemset/problem/1560/C


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int k;
        cin >> k;

        int possible_column = ceil(sqrt(k)); 
        int top_right_corner_value = pow(possible_column, 2) - possible_column + 1;

        int row, col;

        if (k >= top_right_corner_value) {
            row = possible_column;
            col = possible_column - (k - top_right_corner_value);
        } else {
            row = k - top_right_corner_value + possible_column;
            col = possible_column;
        }

        cout << row << " " << col << endl;
    }

    return 0;
}
