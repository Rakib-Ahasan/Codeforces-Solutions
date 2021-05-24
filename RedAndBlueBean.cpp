#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,r,b,d;
    cin>>t;
    while(t--)
    {
        cin>>r>>b>>d;
        if(r>b)
            swap(r,b);
        int m = (b+d)/(d+1);
        cout<<(m<=r? "YES":"NO")<<endl;
    }
}
