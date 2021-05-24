#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    if(n==1)
    {
        if(k==0)
            cout<<1<<endl;
        else
            cout<<-1<<endl;
    }
    else if(k < n/2)
    {
        cout<<-1<<endl;
    }
    else
    {
        int i =1;
        int prev = 2 * ((n/2)-1);
        while(i<=prev)
        {
            cout<<i<<" ";
            i++;
        }
        int d = k- ((n/2)-1);
        int num = prev + (d- (prev % d));
        cout<<num<<" "<< (num + d)<<" ";
        if(n%2)
            cout<<(num+d+1)<<endl;

    }
}
