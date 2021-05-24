#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    string s,r;
    cin>> s>>r;
    reverse(s.begin(),s.end());
    if(s==r)
        cout<<"YES";
    else
        cout<<"NO";
}
