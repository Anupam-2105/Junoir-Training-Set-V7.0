// Anton and Danik
// https://codeforces.com/contest/734/problem/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
ll mx= -1999999;
ll mn= 1e7;

void solve(){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll A= count(s.begin(),s.end(),'A');
    ll D= count(s.begin(),s.end(),'D');
    if(A>D) cout<<"Anton"<<endl;
    else if(A<D) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
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