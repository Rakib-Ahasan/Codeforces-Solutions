#include<iostream>
using namespace std;
int main()
{
    int t,x,n,i;
    cin>>t;
    while(t--)
    {
        int m[51]={0};
        cin>>x;
        for(i=0;i<2*x;i++)
        {
            cin>>n;
            if(m[n]==0)
            {
                cout<<n<<" ";
                m[n]++;
            }
        }
         cout<<endl;
    }
}
