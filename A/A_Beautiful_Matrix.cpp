#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
ll mx= -1999999;
ll mn= 1e7;

void solve(){
    ll x;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>x;
            if(x==1){
                cout<<abs(i-3)+abs(j-3)<<endl;
                return;
            }
        }
    }
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