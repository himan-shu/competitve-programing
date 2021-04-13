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
    int turn=n*n;
    set<ii> one,two;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            if((i+j)%2==0){
                one.insert({i,j});
            }
            else{
                two.insert({i,j});
            }
        }
    }
    int mode=0;
    int in=0;
    while(turn--){
        if(mode==0){
            cin>>in;
            if(in==1){
                ii pos = *(two.begin());
                two.erase(pos);
                cout<<2<<" "<<pos.F<<" "<<pos.S<<endl;
                cout.flush();
            }
            else{
                ii pos = *(one.begin());
                one.erase(pos);
                cout<<2<<" "<<pos.F<<" "<<pos.S<<endl;
                cout.flush();
            }
            if(one.empty()) mode=2;
            if(two.empty()) mode=1;
        }
        else if(mode==1){
            cin>>in;
            if(in==1){
                ii pos = *(one.begin());
                one.erase(pos);
                cout<<3<<" "<<pos.F<<" "<<pos.S<<endl;
                cout.flush();
            }
            else{
                ii pos = *(one.begin());
                one.erase(pos);
                cout<<1<<" "<<pos.F<<" "<<pos.S<<endl;
                cout.flush();
            }
        }
        else if(mode==2){
            cin>>in;
            if(in==2){
                ii pos = *(two.begin());
                two.erase(pos);
                cout<<3<<" "<<pos.F<<" "<<pos.S<<endl;
                cout.flush();
            }
            else{
                ii pos = *(two.begin());
                two.erase(pos);
                cout<<2<<" "<<pos.F<<" "<<pos.S<<endl;
                cout.flush();
            }
        }
    }
    return;
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