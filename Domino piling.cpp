#include<iostream>
using namespace std;

bool isPrime(int n) {
  if (n < 2) return false;
  for (long long i = 2; i * i <= n; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
int main()
{
    /*int n,m,ans=0;
    cin>>n>>m;

    ans= (n*m)/2;
    cout<<ans;*/

    int n;
    cin>>n;
    isPrime(n)? cout<<"Prime": cout<<"Not Prime";
}
