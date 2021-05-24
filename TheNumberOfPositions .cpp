#include<iostream>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    n -= a;
    if(n<=b) cout<<n;
    else cout<<b+1;
}
