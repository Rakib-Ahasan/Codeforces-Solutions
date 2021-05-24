#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    if(n>m*2)
        n= m*2;
    else if(m>n*2)
        m= n*2;
    cout<<(n+m)/3;
}
