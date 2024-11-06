#include <bits/stdc++.h>
using namespace std;

#define int long long

// __builtin_popcount for set bit cnt

/*     sort(v.begin(), v.end(), [](pair<int, int> &a, pair<int, int> &b) {
        if (a.first == b.first) 
            return a.second < b.second;
        return a.first > b.first;
    }); */

void anuj() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        int b = a % k;
        if (b == 0) b = k;
        v.push_back({b, i + 1});
    }
    
    sort(v.begin(), v.end(), [](pair<int, int> &a, pair<int, int> &b) {
        if (a.first == b.first) 
            return a.second < b.second;
        return a.first > b.first;
    });

    for (auto it : v) {
        cout << it.second << " ";
    }
    cout << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        anuj();
    }
}
