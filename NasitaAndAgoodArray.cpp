#ifdef F
    #include "dandan.h"
#else
    #include <bits/stdc++.h>
    using namespace std;
#endif
#define FIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define w(x) int x; cin >> x; while(x--)
#define forn(i, n) for(int i = 0; i < n; ++i)
#define int long long
#define sz(x) (int)x.size()
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define ff first
#define ss second
#define pb push_back
#define endl '\n'



int32_t main()
{
    FIO
    int n;
    w(T)
    {
        cin >> n;
        vector <int> a(n);
        forn(i, n) cin >> a[i];
        vector <vector <int> > ans;
        int mn = *min_element(all(a));
        int idx = -1;
        forn(i, n)
        if (a[i] == mn)
        {
            idx = i;
            break;
        }
        for (int j = idx - 1; j >= 0; --j)
        {
            ans.pb({idx + 1, j + 1, mn, mn + idx - j});
        }
        for (int j = idx + 1; j < n; ++j)
        {
            ans.pb({idx + 1, j + 1, mn, mn + j - idx});
        }
        cout << sz(ans) << endl;
        for (auto it : ans)
        {
            for (auto i : it)
                cout << i << ' ';
            cout << endl;
        }
    }
    return 0;
}
