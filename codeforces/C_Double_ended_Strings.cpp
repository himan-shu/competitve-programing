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
    string a,b;
    cin>>a>>b;
    if(sz(a)>sz(b)){
        string temp=a;
        a=b;
        b=temp;
    }
    int lena=sz(a);
    int lenb=sz(b);

    // wh(a);wh(b);
    for(int len=lena;len>0;--len){
        for(int i=0;i+len-1<lena;++i){
            // wh(len)
            for(int j=0;j+len-1<lenb;++j){
                // wh(a.substr(i,len));
                // wh(b.substr(j,len));
                if(a.substr(i,len)==b.substr(j,len)){
                    cout<<lena+lenb-2*len<<endl;
                    return;
                }
            }
        }
    }
    cout<<lena+lenb<<endl;
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