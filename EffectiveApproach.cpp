#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int ,int> ma;
    int i,n,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        ma[x]=i;
    }

    long long vasya=0,petya=0;
    int q,y;
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>y;

        vasya += ma[y]+1;
        petya += n-ma[y];
    }

    cout<<vasya<<" "<<petya;
}
