#include<iostream>
using namespace std;
int main()
{
    long long int n,k,l;
    cin>>n>>k;
    if(n%2==0) l = n/2;
    else l = (n+1)/2;

    if(k<=l) cout<< (k*2)-1;
    else cout<< (k-l)*2;

}
