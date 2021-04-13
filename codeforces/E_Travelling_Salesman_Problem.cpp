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
    int n;
    cin>>n;
    V(ii) a;
    for(int i=0;i<n;++i){
        geti(x);
        geti(y);
        a.pb({x,y});
    }
    ii fcity=a[0];
    sort(ALL(a));
    int ans=0;
    for(int i=0;i<n;++i){
        ans+=a[i].S;
    }
    V(int) dp(n+1,0);
    V(int) from(n+1,0);
    for(int i=0;i<n;++i){
        dp[i]=-a[i].S;
    }
    V(bool) use(n,false);
    use[0]=true;
    for(int i=1;i<n;++i){
        if(dp[i]<dp[i-1]+(a[i].F-a[i-1].F)){
            use[i]=true;
        }
        else{
            dp[i]=dp[i-1]+(a[i].F-a[i-1].F);
            use[i]=false;
        }
        if(use[i-1]){
            from[i]=i-1;
        }
        else{
            from[i]=from[i-1];
        }
    }
    for(int i=1;i<n;++i){
        if(use[i]){
            ans+=max(0,(a[i].F-a[from[i]].F)-a[from[i]].S);
        }
    }
    ans+=max(0,fcity.F-a[0].F-a[0].S);
    cout<<ans<<endl;
}
   
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}