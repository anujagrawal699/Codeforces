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
        for (ll i = 1; i <= n; i++)
            cin >> v[i];
        vector<ll> p(n + 1, 0);
        for (ll i = 1; i <= n; i++)
            p[i] = v[i] + p[i - 1];

        vector<ll> dp(n + 1, 0);
        dp[0] = 0;
        map<ll, ll> mp;
        mp[0] = 0;
        for (ll i = 1; i <= n; i++)
        {
            dp[i] = dp[i - 1];
            if (mp.find(p[i]) != mp.end())
            {
                dp[i] = max(dp[i], dp[mp[p[i]]] + 1);
            }
            mp[p[i]] = i;
        }
        cout << dp[n] << endl;
    }
}
