#include<iostream>
using namespace std;
int main()
{
    long long n;
	cin>>n;
	if (n < 3){
	     cout<<n;
	     return 0;
    }
	if (n%2 == 0){
		  if (n%3 == 0){
			  cout<<(n-1)*(n-2)*(n-3);
				return 0;
		  }
		  cout<<n*(n-1)*(n-3);
		        return 0;
	}
	cout<<n*(n-1)*(n-2);
	return 0;
}
