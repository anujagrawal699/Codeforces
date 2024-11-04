#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    
    // Read array and calculate initial product
    long long product = 1;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        product = (product * a[i]);
    }
    
    // If already divisible by k, no operations needed
    if(product % k == 0) {
        cout << 0 << "\n";
        return;
    }
    
    // Special case for k = 4
    if(k == 4) {
        // Check if we need 1 operation
        for(int i = 0; i < n; i++) {
            if((a[i] + 1) % 2 == 0 && product * 2 % 4 == 0) {
                cout << 1 << "\n";
                return;
            }
        }
        
        // Check minimum operations needed
        int ans = INT_MAX;
        for(int i = 0; i < n; i++) {
            int curr = a[i];
            int ops = 0;
            while(curr % 4 != 0 && ops < 4) {
                curr++;
                ops++;
            }
            ans = min(ans, ops);
        }
        cout << ans << "\n";
        return;
    }
    
    // For k = 2, 3, 5
    int ans = INT_MAX;
    for(int i = 0; i < n; i++) {
        int curr = a[i];
        int ops = 0;
        // Find how many operations needed to make this number divisible by k
        while(curr % k != 0 && ops < k) {
            curr++;
            ops++;
        }
        ans = min(ans, ops);
    }
    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}