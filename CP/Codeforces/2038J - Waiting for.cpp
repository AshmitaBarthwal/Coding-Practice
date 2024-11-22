// https://codeforces.com/problemset/problem/2038/J


#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> events(n);
    vector<int> values(n);
    
    for (int i = 0; i < n; i++) {
        cin >> events[i] >> values[i];
    }

    int peopleAtStop = 0;

    for (int i = 0; i < n; i++) {
        if (events[i] == "P") {
            peopleAtStop += values[i];
        } else if (events[i] == "B") {
            int freeSeats = values[i];
            if (peopleAtStop < freeSeats) {
                cout << "YES ";
                peopleAtStop = 0;
            } else {
                cout << "NO ";
                peopleAtStop -= freeSeats;
            }
        }
    }
    
    cout << endl;
    return 0;
}
