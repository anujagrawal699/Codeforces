#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m, r, c;
        cin >> n >> m >> r >> c;
        long long tot = n * m;
        long long curr = (r - 1) * m + c;
        long long col = (tot - curr) / m;
        long long ans = tot - curr - col;
        long long colVal = (1 + (m - 1)) * col;

        ans += colVal;
        cout << ans << endl;
    }
}