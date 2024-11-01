//https://codeforces.com/problemset/problem/49/A


#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() 
{
    string question;
    getline(cin, question); 
    string vowels = "AEIOUYaeiouy";
    for (int i = question.length() - 2; i >= 0; --i) 
    {  
        if (isalpha(question[i])) 
        {
            if (vowels.find(question[i]) != string::npos) 
            {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
            return 0;  
        }
    }
    return 0;
}
