#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,x=0;
    cin>>n;
    while(x*2+1<n)
    {
        x = x*2+1;
    }
    cout<<x<<endl;
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
