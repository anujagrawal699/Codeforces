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
        if (n == 1 || n == 3)
        {
            cout << -1 << "\n";
            continue;
        }

        if (n % 2 == 0)
        {
            cout << string(n - 2, '3') << "66" << "\n";
        }
        else
        {
            cout << string(n - 4, '3') << "6366" << "\n";
        }
    }
}
