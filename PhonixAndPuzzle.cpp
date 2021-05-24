#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;
        ll i = sqrtl(n / 2);
        ll j = sqrtl(n);

        if(n % 2 == 1)
        {
            cout << "NO"<<endl;
            continue;
        }

        if(i * i == n / 2 or j * j == n)
            cout << "YES"<<endl;
        else cout << "NO"<<endl;
    }
}
