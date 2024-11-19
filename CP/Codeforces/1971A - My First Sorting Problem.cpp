//https://codeforces.com/problemset/problem/1971/A


#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
int x,y;
int t;
    cin>>t;
while(t--)
{
        cin>>x>>y;
if(x<y)
{
            cout<<x<<" "<<y<<endl;
}
else{
        cout<<y<<" "<<x<<endl;
}
}
return 0;
}
