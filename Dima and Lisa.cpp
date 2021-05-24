#include<bits/stdc++.h>
using namespace std;
long long a,n, s = 4, n1, n2;
bool prime(long long n){
    for(long long i = 2; i * i <= n; ++i)
        if(n % i == 0)
            return false;
    return true;
}
int main() {
    cin>>n;
    if(prime(n))
       cout<<"1"<<endl<<n;
    else if(prime(n - 2))
       cout<<"2"<<endl<<2 <<""<<n-2;
    else {
        while(!prime(n - s))
        {
            s += 2;
        }

        n1 = n2 = s / 2;
        while(!prime(n1) || !prime(n2)){
            n1--;
            n2++;
        }
       cout<<"3"<<endl<<n1<<" "<<n2<<" "<<n-s;
    }
}
