#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c=1,d=0,i,n;
    string a,b,e;
    cin>>n;
    cin>>a;
    for(i=0; i<n-1; i++)
    {
        cin>>b;
        if(b==a)
            c++;
        else
        {
            d++;
            e=b;
        }
    }
    if(c>d)
        cout<<a;
    else
        cout<<e;
}
