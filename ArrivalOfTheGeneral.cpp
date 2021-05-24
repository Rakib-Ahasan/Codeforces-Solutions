#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    int num[a],ma=0,mi=101,maxi,mini;

    for(int i = 0;i<a;i++)
    {
        cin>>num[i];
        if(num[i]>ma)
        {
            ma=num[i];
            maxi=i;
        }
        if(num[i]<=mi)
        {
            mi=num[i];
            mini=i;
        }
    }
    if(maxi>mini)
    {
        mini++;
    }
    cout<<maxi+(a-1)-mini;
}
