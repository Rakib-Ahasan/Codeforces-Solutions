#include<iostream>
using namespace std;
int main()
{
    int n,i,j,right=0,left=0,up=0,low=0,count=0;
    cin>>n;
    int x[n],y[n];
    for(i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(x[j]>x[i] && y[j]==y[i])
                right++;
            if(x[j]<x[i] && y[j]==y[i])
                left++;
            if(x[j]==x[i] && y[i]<y[j])
                up++;
            if(x[j]==x[i] && y[i]>y[j])
                low++;
        }
        if(right>0 && left>0 && up>0 && low>0)
        {
            count++;
            right=left=up=low=0;
        }
        else
            right=left=up=low=0;

    }

    cout<<count;

    /*int n,i,j,k,cl,cr,cu,cb,count;
    cl=cr=cu=cb=count=0;
    cin>>n;
    int a[n],b[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i]>>b[i];
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[j]>a[i] && b[i]==b[j])
            {
                cr++;
            }
            if(a[j]<a[i] && b[i]==b[j])
            {
                cl++;
            }
            if(a[j]==a[i] && b[i]<b[j])
            {
                cu++;
            }
            if(a[j]==a[i] && b[i]>b[j])
            {
                cb++;
            }

        }
        if(cr>0 && cl>0 && cu>0 && cb>0)
        {
            //cout<<"samples-"<<a[i]<<" "<<b[i]<<endl;
            count++;
            cl=cr=cu=cb=0;
        }
        else
        {
            cl=cr=cu=cb=0;
        }
    }
    cout<<count<<endl;*/
}
