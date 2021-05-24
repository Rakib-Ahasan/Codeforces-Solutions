#include<iostream>
using namespace std;
int main()
{
    /*int n,m;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    long long int count=arr[0]-1;
    for(int i=0;i<m-1;i++)
    {
        if(arr[i]>arr[i+1])
            count+=n-(arr[i]-arr[i+1]);
        else if(arr[i]<arr[i+1])
            count+=arr[i+1]-arr[i];
    }
    cout<<count;*/
    int n,m;
    cin>>n>>m;
    int now=0,loc=1;
    long long int ans=0;
    for(int i  =0;i<m;i++)
    {
        cin>>now;
        if(now>=loc)
        ans+=now-loc;
        else
            ans+= n-(loc-now);
        loc=now;
    }
    cout<<ans;
}
