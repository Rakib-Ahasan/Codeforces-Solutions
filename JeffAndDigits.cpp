#include<iostream>
using namespace std;
int main()
{
    int n,five=0,zero=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0) zero++;
        if(arr[i]==5)five++;
    }
    if(zero==0) cout<<"-1";
    else if(five<9) cout<<"0";
    else
    {
        for(int i=0;i<five/9;i++)
        {
            for(int j=0;j<9;j++)
            {
                cout<<"5";
            }
        }
        for(int k =0;k<zero;k++)
        {
            cout<<"0";
        }
    }
}
