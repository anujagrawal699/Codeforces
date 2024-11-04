#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 1; i < n; i++)
    {
        if (abs(v[i] - v[i - 1]) != 7 && abs(v[i] - v[i - 1]) != 5)
        {
            cout << "NO" << "\n";
            return;
        }
    }
    cout << "YES" << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
