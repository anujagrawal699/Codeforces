#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        ll ans = 0;
        vector<int> vis(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            if (vis[i] == 1)
                continue;
            vis[i] = 1;
            int j = v[i];
            int cnt = 1;
            while (j != i)
            {
                cnt++;
                vis[j] = 1;
                j = v[j];
            }
            if (cnt > 2)
                ans += (cnt - 1) / 2;
        }
        cout << ans << endl;
    }
}
