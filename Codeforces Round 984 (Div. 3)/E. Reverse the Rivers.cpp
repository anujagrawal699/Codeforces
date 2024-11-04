#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, q;
    cin >> n >> k >> q;
    vector<vector<int>> grid(k, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> grid[j][i];
        }
    }
    for (int j = 0; j < k; j++)
    {
        for (int i = 1; i < n; i++)
        {
            grid[j][i] |= grid[j][i - 1];
        }
    }

    while (q--)
    {
        int m;
        cin >> m;
        int l = 0, h = n - 1;
        while (m--)
        {
            int r, c;
            char o;
            cin >> r >> o >> c;
            r--;
            if (o == '<')
            {
                int i = lower_bound(grid[r].begin(), grid[r].end(), c) - grid[r].begin();
                h = min(h, i - 1);
            }
            else
            {
                int i = upper_bound(grid[r].begin(), grid[r].end(), c) - grid[r].begin();
                l = max(l, i);
            }
        }
        if (l > h)
            cout << "-1\n";
        else
            cout << l + 1 << "\n";
    }
}