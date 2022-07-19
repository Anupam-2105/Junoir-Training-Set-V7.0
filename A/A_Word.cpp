// Word
// https://codeforces.com/contest/59/problem/A

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
    ll cnt=0;
    for(ll i=0;i<str.size();i++){
        if (isupper(str[i])) cnt++;
    }

    if(str.size()-cnt>cnt or str.size()-cnt==cnt) transform(str.begin(), str.end(), str.begin(), ::tolower);
    else transform(str.begin(), str.end(), str.begin(), ::toupper);
    
    cout<<str<<endl;
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