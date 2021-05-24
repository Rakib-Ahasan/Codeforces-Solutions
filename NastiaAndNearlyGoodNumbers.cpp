#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(b==1)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            cout<<a*b<<" "<<a<<" "<<a*(b+1)<<endl;
        }
    }
}
