#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (auto &it : v)
            cin >> it;

        int sz = (n + 1) / 2;
        vector<vector<int>> dp(sz, vector<int>(2, 0));

        for (int i = 1; i < sz; i++)
        {
            dp[i][0] = min(dp[i - 1][0] + (v[i - 1] == v[i]) + (v[n - i - 1] == v[n - i]),
                           dp[i - 1][1] + (v[i] == v[n - i]) + (v[i - 1] == v[n - i - 1]));

            dp[i][1] = min(dp[i - 1][0] + (v[i - 1] == v[n - i - 1]) + (v[i] == v[n - i]),
                           dp[i - 1][1] + (v[i] == v[i - 1]) + (v[n - i - 1] == v[n - i]));
        }

        int ans = min(dp[sz - 1][0], dp[sz - 1][1]);

        if (n % 2 == 0)
        {
            ans += (v[(n / 2) - 1] == v[n / 2]);
        }

        cout << ans << endl;
    }
}