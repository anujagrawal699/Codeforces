#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    set<int> st;

    for (int i = 0; i < n - 3; i++)
    {
        if (s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '0' && s[i + 3] == '0')
            st.insert(i);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int i, v;
        cin >> i >> v;
        i--;
        s[i] = '0' + v;

        for (int j = max(0, i - 3); j <= min(i, n - 4); j++)
        {
            if (st.count(j))
                st.erase(j);
        }

        for (int j = max(0, i - 3); j <= min(i, n - 4); j++)
        {
            if (s[j] == '1' && s[j + 1] == '1' && s[j + 2] == '0' && s[j + 3] == '0')
            {
                st.insert(j);
            }
        }

        cout << (st.empty() ? "NO\n" : "YES\n");
    }
}

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}