#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {

	int t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    bool ok = true;
	    string s;
	    cin>>s;
	    for(ll i=0;i<n-1;i++)
	    {
	        if(s[i]!=s[i+1])
	        {
	            for(ll j=i+1;j<n;j++)
	            {
	                if(s[i]==s[j])
	                {
	                    ok = false;
	                    break;
	                }
	            }
	        }
	    }
	    if(ok)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;



	}
	return 0;
}


