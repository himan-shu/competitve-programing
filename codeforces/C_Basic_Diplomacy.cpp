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
    int n,m;
    cin>>n>>m;
    vector<int> ans(m,0);
    vector<vector<int>> input(m);
    vector<int> count(n+1,0);
    for(int i=0;i<m;++i){
        int k;
        cin>>k;
        for(int j=0;j<k;++j){
            int x;
            cin>>x;
            input[i].pb(x);
        }
        count[input[i][0]]++;
        ans[i]=input[i][0];
    }
    int limit=m/2+m%2;
    for(int i=1;i<=n;++i){
        if(count[i]>limit){
            for(int j=0;j<m;++j){
                if(ans[j]==i && input[j].size()>1){
                    ans[j]=input[j][1];
                    count[i]--;
                }
                if(count[i]<=limit){
                    break;
                }
            }
            if(count[i]<=limit){
                cout<<"YES"<<endl;
                for(int i=0;i<m;++i){
                    cout<<ans[i]<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            return;
        }
    }
    cout<<"YES"<<endl;
                for(int i=0;i<m;++i){
                    cout<<ans[i]<<" ";
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