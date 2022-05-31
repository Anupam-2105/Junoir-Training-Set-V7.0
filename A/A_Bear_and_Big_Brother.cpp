// Bear and Big Brother
// https://codeforces.com/contest/791/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
ll mx= -1999999;
ll mn= 1e7;

void solve(){
    ll a,b;
    cin>>a>>b;
    ll cnt=0;
    while(a<=b){
        a*=3;
        b*=2;
        cnt++;
    }
    cout<<cnt<<endl;
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