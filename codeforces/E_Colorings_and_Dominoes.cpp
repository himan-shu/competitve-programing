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
#define mod 998244353
#define INF (ll)1e18
#define wh(a) cout<<#a<<" is "<<a<<endl;cout.flush();
#define LIMIT 1009
#define ALL(x) x.begin(), x.end()
#define sz(x) int(x.size())
#define geo(x) cout<<fixed<<setprecision(x)
#define geti(n) int n;cin>>n;
#define getai(a,n) V(int) a(n);for(int i=0;i<n;++i)cin>>a[i];


ll po(ll a,ll b){// used
   ll ans=1,mul=a%mod;
   while(b){
       if(b%2==1){
           ans=(ans*mul)%mod;
       }
       mul=(mul*mul)%mod;
       b=b/2;
   }
   return ans;
}


void solve(){
    int n,m;
    cin>>n>>m;
    string s[n];
    for(int i=0;i<n;++i){
        cin>>s[i];
    }
    int w=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(s[i][j]=='o'){
                w++;
            }
        }
    }
    int val=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(s[i][j]=='o'){
                if(j<m-1 && s[i][j+1]=='o'){
                    val=(val+po(2,w-2))%mod;
                }
                else if(i<n-1 &&  s[i+1][j]=='o'){
                    val=(val+po(2,w-2))%mod;
                }
            }
        }
    }
    cout<<val;
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