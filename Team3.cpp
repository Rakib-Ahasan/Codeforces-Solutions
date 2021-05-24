#include<iostream>
using namespace std;
int main()
{
    int n,x,y,z,count=0;
    cin>>n;
    for(int i = 0; i<n;i++)
    {
        cin>>x>>y>>z;
        //if(x==1 && y==1 && z==0) count++;
        //else if(x==1 && y==0 && z==1) count++;
        //else if(x==0 && y==1 && z==1) count++;
        //else if(x==1 && y==1 && z==1) count++;

        //Another approach
        if(x+y+z >= 2)count++;
    }
    cout<<count;
}
