// Boy or Girl
// https://codeforces.com/contest/236/problem/A

// Author : Anupam Dwivedi
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
    string str;
    cin>>str;
    unordered_set<char> s;
    ll ans=0;
    for(ll i=0;i<str.length();i++){
        if(s.find(str[i]) == s.end()) {
            s.insert(str[i]);
            ans++;
        }
    }
    if(ans%2) cout<<"IGNORE HIM!"<<endl;
    else cout<<"CHAT WITH HER!"<<endl;
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