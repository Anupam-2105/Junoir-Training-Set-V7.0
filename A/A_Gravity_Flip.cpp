// Gravity Flip
// https://codeforces.com/contest/405/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
ll mx= -1999999;
ll mn= 1e7;

void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;++i) cin>>a[i];
    sort(a,a+n);
    for(ll i=0;i<n;++i) cout<<a[i]<<" ";
}

int main(){
    fast
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}