#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,drink,slice,salt;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    drink = k*l/nl;
    slice = c*d;
    salt = p/np;

    cout<<min(min(drink,slice),salt)/n;
}
