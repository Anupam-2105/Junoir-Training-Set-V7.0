// Team
// https://codeforces.com/contest/231/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
ll mx= -1999999;
ll mn= 1e7;

void solve(){
    ll n;
    cin>>n;
    ll ans=0;
    for(ll i=0;i<n;i++){
        string s;
        cin>>s;
        ll cnt = count(s.begin(), s.end(), "1");
        if(cnt>1) ans++;
    }
    
    cout<<ans<<endl;
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