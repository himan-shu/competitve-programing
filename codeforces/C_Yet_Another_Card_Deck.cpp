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
    int n,k;
    cin>>n>>k;
    string ans="";
    for(char i='a';i<'a'+k;++i){
        ans+=i;
        if(i!='a')
            ans+=i;
        // wh(ans);
        for(char j='b';j<i;++j){
            ans+=j;
            ans+=i; 
        }
        ans+='a';
        // wh(ans);
    }
    while(n>0){
        if(sz(ans)>n){
            cout<<ans.substr(0,n);
            break;
        }
        else{
            cout<<ans;
            n=n-sz(ans);
        }
    }
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