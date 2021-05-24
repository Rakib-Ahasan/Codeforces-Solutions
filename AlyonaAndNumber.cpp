#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    long long count = 0;

    for(int i =1;i<=n;i++)
    {
        count += (m+i%5) /5;
    }
    cout<<count;
}
