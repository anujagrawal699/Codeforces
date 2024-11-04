#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define ll long long

int f(vector<int> &l, int sz)
{
    if (sz < 4)
        return 0;

    int res = 0;

    for (int i = 0; i < sz; i++)
    {

        if (l[i % sz] == 1 &&

            l[(i + 1) % sz] == 5 &&

            l[(i + 2) % sz] == 4 &&
            l[(i + 3) % sz] == 3)
        {
            res++;
        }
    }
    return res;
}

void solve()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {

        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            grid[i][j] = s[j] - '0';
        }
    }

    int r = n;
    int c = m;
    int ans = 0;
    int nr = 0, nc = 0;

    while (r > 0 && c > 0)
    {
        vector<int> l;

        for (int j = nc; j < nc + c; j++)
        {
            l.push_back(grid[nr][j]);
        }

        for (int i = nr + 1; i < nr + r; i++)
        {
            l.push_back(grid[i][nc + c - 1]);
        }
        if (r > 1 && c > 1)
        {
            for (int j = nc + c - 2; j >= nc; j--)
            {
                l.push_back(grid[nr + r - 1][j]);
            }
        }

        if (r > 1 && c > 1)
        {

            for (int i = nr + r - 2; i > nr; i--)
            {
                l.push_back(grid[i][nc]);
            }
        }
        r -= 2;
        c -= 2;
        ans += f(l, l.size());

        nr++;
        nc++;
    }
    cout << ans << "\n";
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        solve();
    }
    return 0;
}