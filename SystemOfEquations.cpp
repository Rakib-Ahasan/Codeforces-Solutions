#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,m,pair=0,equ1,equ2,sum;
    cin>>n>>m;
    sum = n+m;
    for(a=0;a<sum;a++)
    {
        for(b=0;b<sum;b++)
        {
            equ1 = (a*a)+b;
            equ2 = a+(b*b);
            if(equ1 == n && equ2 == m)
                pair++;
        }
    }
    cout<<pair;
}
