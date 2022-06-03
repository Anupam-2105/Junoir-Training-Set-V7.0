#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
ll mx= -1999999;
ll mn= 1e7;

void solve(){
    ll a[5][5];
    ll r,c,ans;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                r=i;
                c=j;
                ans=(3-i)+(3-j);
            }
        }
    }
    cout<<3-r+3-c<<ans<<endl;

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