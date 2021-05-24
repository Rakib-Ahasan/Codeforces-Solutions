#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j,M[6][6];
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cin>>M[i][j];
            if(M[i][j]==1) cout<<abs(i-3)+abs(j-3)<<endl;
        }
    }
}
