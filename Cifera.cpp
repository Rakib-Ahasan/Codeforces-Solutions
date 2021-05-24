#include<iostream>
using namespace std;
int main()
{
    int a,b,c =-1;
    cin>>a>>b;
    while(b%a==0)
    {
        b/=a;
        c++;
    }
    if(b==1)
        cout<<"YES"<<endl<<c;
    else
        cout<<"NO";

}
