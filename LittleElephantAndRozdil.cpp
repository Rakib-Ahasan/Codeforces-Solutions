#include<iostream>
using namespace std;
int main()
{
    int n,city,i2=-1,minimum,i1=0;
    cin>>n>>city;
    minimum =city;
    for(int i=1;i<n;i++){
        cin>>city;
        if(minimum > city)
        {
            minimum = city;
            i1=i;
        }
        else if(city == minimum)
        {
            i1=i;
            i2=i;
        }
    }
    if(i2==i1) cout<<"Still Rozdil";
    else cout<<i1+1;
}
