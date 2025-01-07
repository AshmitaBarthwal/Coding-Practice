//https://codeforces.com/problemset/problem/346/A


#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    set<int> s;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        s.insert(num);
    }

    bool alice_turn = true;
    while (true) {
        bool move_possible = false;
        vector<int> elements(s.begin(), s.end());

        for (int i = 0; i < elements.size(); ++i) {
            for (int j = i + 1; j < elements.size(); ++j) {
                int diff = abs(elements[i] - elements[j]);
                if (s.find(diff) == s.end()) {
                    s.insert(diff);
                    move_possible = true;
                    break;
                }
            }
            if (move_possible) break;
        }

        if (!move_possible) {
            cout << (alice_turn ? "Bob" : "Alice") << endl;
            break;
        }
        alice_turn = !alice_turn;
    }

    return 0;
}
