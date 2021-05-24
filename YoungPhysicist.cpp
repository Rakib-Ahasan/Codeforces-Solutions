#include<iostream>
using namespace std;
int main()
{
    int n,x,y,z,SumOfX=0,SumOfY=0,SumOfZ=0;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>x>>y>>z;
        SumOfX += x;
        SumOfY += y;
        SumOfZ += z;
    }
    if(SumOfX == 0 && SumOfY == 0 && SumOfZ == 0) cout<<"YES";
    else cout<<"NO";
}

