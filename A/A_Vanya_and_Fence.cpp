// Vanya and Fence
// https://codeforces.com/contest/677/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
ll mx= -1999999;
ll mn= 1e7;

void solve(){
    ll n,h;
    cin>>n>>h;
    ll a[n];
    ll cnt=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>h) cnt++;
    }
    cout<<(n-cnt)+(cnt*2)<<endl;
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