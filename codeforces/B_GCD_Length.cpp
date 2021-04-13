#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long int
#define V(a) vector<a>
#define ii pair<int,int>
#define lii pair<ll,ll>
#define PI 3.14159265358
#define F first
#define S second
#define mod 1000000007
#define INF (ll)1e18
#define wh(a) cout<<#a<<" is "<<a<<endl;cout.flush();
#define LIMIT 1009
#define ALL(x) x.begin(), x.end()
#define sz(x) int(x.size())
#define geo(x) cout<<fixed<<setprecision(x)
#define geti(n) int n;cin>>n;
#define getai(a,n) V(int) a(n);for(int i=0;i<n;++i)cin>>a[i];
   
ll count(ll x){
    ll  ret=0;
    while(x){
        ret++;
        x/=10;
    }
    return ret;
}
void solve(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll x,y,g=1;
    for(ll i=1;i<c;++i){
        g*=10;
    }
    x=y=g;
    while(1){
        if(count(x)==a){
            break;
        }
        x*=2;
    }
    while(1){
        if(count(y)==b){
            break;
        }
        y*=3;
    }
    cout<<x<<" "<<y<<endl;
}
   
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}