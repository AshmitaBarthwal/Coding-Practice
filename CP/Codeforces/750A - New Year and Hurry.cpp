// https://codeforces.com/problemset/problem/750/A


#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    int time_left = 240 - k;
    int c = 0;
    
    for (int i = 1; i <= n; i++) {
        int time_to_solve = 5 * i;
        if (time_left >= time_to_solve) {
            c++;
            time_left -= time_to_solve;
        } else {
            break;
        }
    }
    
    cout << c << endl;
    return 0;
}
