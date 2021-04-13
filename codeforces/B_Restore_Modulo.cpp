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
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    set<ll> pos,neg;
    for(int i=1;i<n;++i){
        if(a[i]-a[i-1]>=0){
            pos.insert(a[i]-a[i-1]);
        }
        else{
            neg.insert(a[i]-a[i-1]);
        }
    }
    if(pos.size()>1 || neg.size()>1 ){
        cout<<-1<<endl;
        return;
    }
    if(pos.size()==0 || neg.size()==0){
        cout<<0<<endl;
        return;
    }
    ll m=*(pos.begin())-*(neg.begin());
    ll c=(a[1]-a[0]+m)%m;
    ll val=a[0];
    if(a[0]>=m){
        cout<<-1<<endl;
        return;
    }
    for(int i=1;i<n;++i){
        val=(val+c)%m;
        if(val!=a[i]){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<m<<" "<<c<<endl;

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