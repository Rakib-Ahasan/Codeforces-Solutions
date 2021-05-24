#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        for(int i = 1; i<=9;i++)
        {
            ll cur = i;
            while(cur <= n)
            {
                ans++;
                cur *= 10;
                cur +=i;
            }
        }
        cout<<ans<<endl;
    }
}
