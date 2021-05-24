#include<iostream>
using namespace std;
int main()
{
    int x,y,count=0;
    int prime[16]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

    cin>>x>>y;
    for(int i=0;i<15;i++)
    {
        if(x==prime[i] && y==prime[i+1])
        {
            count++;
            break;
        }
    }
    if(count==0) cout<<"NO";
    else cout<<"YES";

}
