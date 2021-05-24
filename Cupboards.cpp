#include<iostream>
using namespace std;
int main()
{
    int l,r,n;
    int lopen=0,lclose=0,ropen=0,rclose=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>l>>r;
        if(l==0) lclose++;
        else lopen++;
        if(r==0) rclose++;
        else ropen++;
    }
    l=min(lopen,lclose);
    r= min(ropen,rclose);
    cout<<l+r;
}
