// Petya and Strings
// https://codeforces.com/contest/112/problem/A

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
#define MX INT_MAX
#define MN INT_MIN

void solve(){
    string a,b;
    cin>>a>>b;
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    transform(b.begin(), b.end(), b.begin(), ::toupper);
    if(a>b) cout<<1<<endl;
    else if(a<b) cout<<-1<<endl;
    else cout<<0<<endl;
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