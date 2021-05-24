#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    int page[7];
    cin>>n;

    for(int i=0; i<7; i++)
    {
        cin>>page[i];
    }
    for(int i=0; i<7; i++)
    {
        n -= page[i];
        if(n<=0)
        {
            cout<<i+1;
            break;
        }
        if(i==6)
            i=-1;
    }
}
