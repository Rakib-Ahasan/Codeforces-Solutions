#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,a,count,sum=0;
    cin>>n>>h;
    while(n--)
    {
        cin>>a;
        if(a<=h)
            count=1;
        else
            count=2;
        sum += count;
    }
    cout<<sum;
}
