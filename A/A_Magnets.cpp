// Magnets
// https://codeforces.com/contest/344/problem/A

#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int
#define float long double
#define endl "\n"
#define vll vector<long long int>
#define all(a) a.begin(),a.end()
#define pb push_back
#define mp make_pair
#define gcd(a,b) __gcd(a,b)
#define MX INT_MAX
#define MN INT_MIN

void solve(){
    ll n,n1=0,n2,cnt=1;
    cin>>n;
    for(ll i=0;i<n;i++){
        cin>>n2;
        if(n1!=0 and n1!=n2) cnt++;
        n1=n2;
    }
    cout<<cnt<<endl;
}

int main(){
    fast
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}