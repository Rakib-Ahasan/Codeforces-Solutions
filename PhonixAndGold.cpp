#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, x;
        cin >> n >> x;

        ll sum = 0;
        ll a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if(sum < x)
        {
            cout << "YES"<<endl;
            for(int i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
            continue;
        }

        if(sum == x)
        {
            cout << "NO"<<endl;
            continue;
        }

        sum = 0;
        cout << "YES"<<endl;
        for(int i = 0; i < n; i++)
        {
            if(a[i] + sum == x)
            {
                swap(a[i], a[i + 1]);

            }
            cout << a[i] << " ";
            sum += a[i];
        }
        cout << endl;
    }
}
