#include<iostream>
using namespace std;
int main()
{
    int x,step=0,sum=0;
    cin>>x;
    if(x%5 == 0)
        cout<<x/5;
    else
        cout<<(x/5)+1;
}
