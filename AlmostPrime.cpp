#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
    cin>>n;
    int primes[3001] = {0};
    bool isPrime[3001]= {false};

    for(int i =2; i<=n; i++)
    {
        if(!isPrime[i])
        {
            for(int j= i+i; j<=n; j+=i)
            {
                isPrime[j]=true;
                primes[j] +=1;
            }
        }
        if(primes[i]==2)
            count++;
    }

        cout<<count;
}

