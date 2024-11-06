#include <bits/stdc++.h>
using namespace std;

#define int long long


void anuj(){
    int n, p;
    cin>>n>>p;
    vector<int> a(n), b(n);
    for(auto &it: a) cin>>it;
    int minb = INT_MAX;
    for(auto &it: b){
        cin>>it;
        minb = min(minb, it);
    }
    
    vector<pair<int, int>> v;
    v.push_back({p, n+1});
    for(int i = 0; i<n; i++){
        v.push_back({b[i], a[i]});
    }
    sort(v.begin(), v.end());
    int ans = p;
    n--;
    for(auto it: v){
        int ai = it.second, bi = it.first;
        int req = min(n, ai);
        ans += req * bi * 1LL;
        n -= req;
        if(n == 0) break; 
    }
    cout<<ans<<"\n";
    
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        anuj();
    }
}
