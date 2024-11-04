#include <bits/stdc++.h>

using namespace std;

#define fastIO                   
    ios::sync_with_stdio(false); /
    cin.tie(NULL);               /
    cout.tie(NULL);              /
    cout.precision(numeric_limits<double>::max_digits10); /

#define int long long

void solve()
{
    int n;
    cin >> n;
    int xor3;
    cout << "xor 1 " << n << endl;
    cin >> xor3;
    int lo = 1, hi = n, xor2;
    vector<int> ans;
    if (xor3 == 0)
    {
        for (int i = 0; i <= 60; i++)
        {
            cout << "xor " << (1LL << i) << ' ' << (1LL << (i + 1)) - 1 << endl;
            int x;
            cin >> x;
            if (x)
            {
                ans.push_back(x);
                xor2 = x;
                lo = 1LL << (i + 1);
                break;
            }
        }
    }
    else
    {
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            cout << "xor " << lo << ' ' << mid << endl;
            int x;
            cin >> x;
            if (x == 0)
            {
                lo = mid + 1;
            }
            else if (x == xor3)
            {
                hi = mid;
            }
            else
            {
                if (x <= mid)
                {
                    cout << "xor " << x << ' ' << x << endl;
                    int y;
                    cin >> y;
                    if (y == x)
                    {
                        ans.push_back(x);
                        xor2 = xor3 ^ x;
                        lo = mid + 1;
                        break;
                    }
                }
                ans.push_back(xor3 ^ x);
                xor2 = x;
                hi = mid;
                break;
            }
        } 
    }

    while (lo <= hi)
    {
        int mid = lo + (hi - lo) / 2;
        cout << "xor " << lo << ' ' << mid << endl;
        int x;
        cin >> x;
        if (x == 0)
        {
            lo = mid + 1;
        }
        else if (x == xor2)
        {
            hi = mid;
        }
        else
        {
            ans.push_back(x);
            ans.push_back(xor2 ^ x);
            break;
        }
    }

    cout << "ans ";
    for (auto i : ans)
        cout << i << ' ';
    cout << endl;
}

int32_t main()
{
    fastIO;

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}