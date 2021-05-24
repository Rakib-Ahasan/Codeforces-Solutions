#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=0)
        cout<<n<<endl;
    else
    {
        int n1 = n/10;
        int n2 = n/100 * 10 + n%10;
        if(n1>n2)
            cout<<n1;
        else
            cout<<n2;
    }
}
