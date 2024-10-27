#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long MOD = 1e9 + 7;
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        if (k == 1)
        {
            cout << n % MOD << endl;
            continue;
        }
        long long j = 2;
        long long a = 1, b = 1;
        while (1)
        {
            long long c = (a + b) % k;
            j++;
            if (c == 0)
            {
                cout << ((n % MOD) * j) % MOD << endl;
                break;
            }
            b = a;
            a = c;
        }
    }
}