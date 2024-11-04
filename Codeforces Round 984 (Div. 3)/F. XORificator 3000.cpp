#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll axor(ll n)
{
    if (n % 4 == 0)
    {
        return n;
    }
    else if (n % 4 == 1)
    {
        return 1;
    }
    else if (n % 4 == 2)
    {
        return n + 1;
    }
    return 0;
}

ll func(ll n, ll i, ll k)
{
    if (n <= 0)
        return 0;
    ll ans = axor(n);
    ll x = n >> i;
    if (n % (1LL << i) < k)
        x--;
    ll rem = axor(x) << i;
    if (x % 2 == 0)
        rem ^= k;
    ans ^= rem;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll l, r, i, k;
        cin >> l >> r >> i >> k;
        if (i == 0)
        {
            cout << "0\n";
            continue;
        }
        cout << (func(r, i, k) ^ func(l - 1, i, k)) << "\n";
    }
}