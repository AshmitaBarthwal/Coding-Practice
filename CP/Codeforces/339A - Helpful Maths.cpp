//https://codeforces.com/problemset/problem/339/A


#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    vector<int> numbers;
    stringstream ss(s);
    string temp;
    
    while (getline(ss, temp, '+')) {
        numbers.push_back(stoi(temp));
    }
    
    sort(numbers.begin(), numbers.end());
    
    string result = to_string(numbers[0]);
    for (int i = 1; i < numbers.size(); ++i) {
        result += "+" + to_string(numbers[i]);
    }
    
    cout << result << endl;
    
    return 0;
}
