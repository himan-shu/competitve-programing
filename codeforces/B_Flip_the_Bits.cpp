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
    string a,b;
    cin>>n>>a>>b;
    // cout<<a<<endl<<b<<endl;
    V(int) sum(n,0);
    for(int i=0;i<n;++i){
        a[i]=a[i]-'0';
        b[i]=b[i]-'0';
        if(i==0){
            sum[i]=a[i];   
        }
        else{
            sum[i]=sum[i-1]+a[i];
        }
    }
    int change=0;
    for(int i = n-1 ; i>=0 ; --i){
        if((a[i]+change)%2==b[i]) continue;
        else{
            // wh(i)wh(sum[i]);
            if(2*sum[i]==i+1){
                change++;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
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