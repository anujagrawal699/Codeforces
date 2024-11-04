#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> f(ll n){
    if( n== 4) {
        vector<ll> ans = {2,1 , 3, 4};
        return ans;
    }
    if(n == 6){
        vector<ll> ans = {1, 2, 4, 6, 5, 3};
        return ans;
    }
    int x = log2(n);
    int y = 1LL << x;
    vector<ll> ans;
    ans.push_back(y);
    ans.push_back(y-1);
    ans.push_back(y-2);
    ans.push_back(3);
    ans.push_back(1);
    ans.push_back(2);
    for(int i = 4; i<y-2; i++) ans.push_back(i);
    for(int i = y+1; i <= n;i++) ans.push_back(i);
    reverse(ans.begin(), ans.end());
    return ans;
    
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	     if (n % 2) {
        vector<ll> ans = f(n - 1);
        ans.push_back(n);
        cout << n << '\n';
	        for(auto it: ans) cout<<it<<" ";
	        cout<<"\n";
	    }else {
        vector<ll> ans = f(n);
        int k = 1 << ((int)log2(n) + 1);
        k--;
        cout << k << '\n';
	        for(auto it: ans) cout<<it<<" ";
	        cout<<"\n";
	    }
	}

}
