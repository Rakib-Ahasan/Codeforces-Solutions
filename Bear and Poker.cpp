#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,a,last;
    bool first = 1,ok=1;
    cin>>n;

    while(n--)
    {
        cin>>a;
        while(a%2==0 || a%3==0)
        {
            if(a%2==0)
                a/=2;
            if(a%3==0)
                a/=3;
        }
        if(first)
        {
            first =0;
        }
        else
        {
            if(a != last)
            {
                ok =0;
                break;
            }
        }
        last =a;
    }
    cout<<(ok?"Yes":"No");
}
