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
   
void solve(){
    geti(n);
    getai(q,n);
    q.pb(INT_MAX);
    V(int) ans1(n);
    set<int> all;
    for(int i=1;i<=n;++i){
        all.insert(i);
    }
    for(int i=0;i<n;++i){
        all.erase(q[i]);
    }
    cout<<q[0]<<" ";
    for(int i=1;i<n;++i){
        if(q[i]==q[i-1]){
            auto it=all.begin();
            cout<<*it<<" ";
            all.erase(it);
        }
        else{
            cout<<q[i]<<" ";
        }
    }
    cout<<endl;
    ////
    V(int) ans2(n);
    for(int i=1;i<=n;++i){
        all.insert(i);
    }
    for(int i=0;i<n;++i){
        all.erase(q[i]);
    }
    cout<<q[0]<<" ";
    for(int i=1;i<n;++i){
        if(q[i]==q[i-1]){
            auto it=all.lower_bound(q[i]);
            it--;
            cout<<*it<<" ";
            all.erase(it);
        }
        else{
            cout<<q[i]<<" ";
        }
    }
    cout<<endl;
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