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
        vector<vector<int>> grid(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> grid[i][j];
            }
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int k = 0;
            int l = i;
            int mini = INT_MAX;
            while (k < n && l < n)
            {
                mini = min(mini, grid[k][l]);
                k++;
                l++;
            }
            if (mini < 0)
                ans += -mini;
        }

        for (int i = 1; i < n; i++)
        {
            int k = i;
            int l = 0;
            int mini = INT_MAX;
            while (k < n && l < n)
            {
                mini = min(mini, grid[k][l]);
                k++;
                l++;
            }
            if (mini < 0)
                ans += -mini;
        }
        cout << ans << endl;
    }
}