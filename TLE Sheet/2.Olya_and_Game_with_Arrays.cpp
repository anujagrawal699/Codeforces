#include <bits/stdc++.h>
using namespace std;

#define int long long

void anuj(){
 int n;
 cin>>n;
    vector<int> min2;
    int mini = INT_MAX;
    while(n--){
        int m;
        cin>>m;
        vector<int> a(m);
        for(auto &it: a) cin>>it;
        int minel = *min_element(a.begin(), a.end());
        mini = min(mini, minel);
        a.erase(find(a.begin(), a.end(), minel));
        int secminel = *min_element(a.begin(), a.end());
        min2.push_back(secminel);
    }
   
    int ans = accumulate(min2.begin(), min2.end(), 0LL) - *min_element(min2.begin(), min2.end()) + mini;
    cout<< ans <<"\n";
    
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
