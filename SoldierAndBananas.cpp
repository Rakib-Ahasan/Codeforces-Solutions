#include<iostream>
using namespace std;
int main()
{
    int k,n,w,cost=0;
    cin>>k>>n>>w;
    for(int i =1; i<=w; i++)
    {
        cost += (i*k);
    }
    int d = cost - n;
    if(d<0)
         cout<<0<<endl;
    else
        cout<<d<<endl;
}
