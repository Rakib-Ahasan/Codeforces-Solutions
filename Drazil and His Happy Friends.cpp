#include<bits/stdc++.h>
using namespace std;

int brr[101],grr[101];

int main()
{
	int n,m;
	cin>>n>>m;

	int b;
	cin>>b;
	for(int i=0;i<b;i++)
	{
		int p;
		cin>>p;
		brr[p]=1;
	}
 	int g;
 	cin>>g;
	for(int i=0;i<g;i++)
	{
		int p;
		cin>>p;
		grr[p]=1;
	}

 	int mm=max(n,m);
	for(int i=0;i<=mm*mm;i++)
	{
		if(brr[i%n]==1 || grr[i%m]==1)
		{
			brr[i%n]=1;
			grr[i%m]=1;
		}
	}

	int bcount=0,gcount=0;

	for(int i=0;i<n;i++)
	    if(brr[i]==1)
	        bcount++;

	for(int i=0;i<m;i++)
	    if(grr[i]==1)
	        gcount++;

	if(bcount==n && gcount==m)
	    cout<<"Yes";
	else
	    cout<<"No";


}
