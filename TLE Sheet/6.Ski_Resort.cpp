#include <bits/stdc++.h>
using namespace std;

#define int long long

// __builtin_popcount for set bit cnt

/*     sort(v.begin(), v.end(), [](pair<int, int> &a, pair<int, int> &b) {
        if (a.first == b.first)
            return a.second < b.second;
        return a.first > b.first;
    }); */

void anuj()
{
    int n, k, q;
    cin >> n >> k >> q;
    vector<bool> a;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        if (b > q)
        {
            a.push_back(false);
        }
        else
            a.push_back(true);
    }
    int cnt = 0;
    int ways = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i])
            cnt++;
        else
        {
            if (cnt >= k)
            {
                ways += (cnt * 1LL * (cnt + 1)) / 2 - ((k - 1) * cnt - ((k - 2) * (k - 1)) / 2);
            }
            cnt = 0;
        }
    }
    if (cnt >= k)
        ways += (cnt * 1LL * (cnt + 1)) / 2 - ((k - 1) * cnt - ((k - 2) * (k - 1)) / 2);
    cout << ways << "\n";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        anuj();
    }
}