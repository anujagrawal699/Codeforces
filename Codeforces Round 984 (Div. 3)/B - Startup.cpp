#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> bc;
    for (ll i = 0; i < k; i++)
    {
        ll b, c;
        cin >> b >> c;
        bc.push_back({b, c});
    }
    unordered_map<ll, ll> st;
    for (auto it : bc)
    {
        st[it.first] += it.second;
    }
    vector<ll> mp;
    for (auto it : st)
        mp.push_back(it.second);
    sort(mp.rbegin(), mp.rend());
    ll ans = 0;
    ll i = 0;
    while (n-- && i < mp.size())
    {
        ans += mp[i];
        i++;
    }
    cout << ans << "\n";
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
