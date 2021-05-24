#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
        cin>>n>>k;
        int arr[n+1];
        for(int i =0; i<n; i++)
            cin>>arr[i];
        for(int i =0; i<n-1; i++)
        {
            int c = min(arr[i],k);
            arr[i] -=c;
            arr[n-1] +=c;
            k -=c;
        }
        for(int i =0; i<n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
}
