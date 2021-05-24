#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    vector <bool> arr(1000005);
    arr[0] = arr[1] = 1; arr[2] = 0;
    for (ll i = 2; i * i <= 1000005; i++) {
        if (arr[i] == 0) {
            for (ll j = i * i; j < 1000005; j += i) {
                if (arr[j] == 0) arr[j] = 1;

            }

        }
    }
    ll Test, num,snum;
    cin >> Test;
    while (Test--) {
        cin >> num; snum = sqrt(num);
        if (snum * snum == num && arr[snum] == 0)  cout<<"YES\n";
        else cout<<"NO\n";

    }

}
