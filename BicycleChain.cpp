#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j;

    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];

    cin>>m;
    int b[m];
    for(i=0; i<m; i++)
        cin>>b[i];

    int ans=0,res=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(b[j] % a[i] == 0)
            {
                if(b[j] / a[i] > res)
                {
                    res = b[j] / a[i];
                    ans = 1;
                }
                else if((res !=0 && (b[j] / a[i]) == res))
                    ans++;
            }
        }
    }
        cout<<ans;

    }
