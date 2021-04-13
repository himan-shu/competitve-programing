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
    int  n;
    string s;
    cin>>n>>s;
    if(s[0]=='0' || s[n-1]=='0'){
        cout<<"NO"<<endl;
        return;
    }
    int count=0;
    for(int i=0;i<n;++i){
        if(s[i]=='0') count++;
    }
    if(count%2==1){
        cout<<"NO"<<endl;
        return ;
    }
    cout<<"YES"<<endl;
    int one=0;
    int zero=0;
    string ansa="",ansb="";
    // wh(count);
    for(int i=0;i<n;++i){
        // wh(one);wh(zero);
        if(s[i]=='1'){
            if(one<(n-count)/2){
                ansa+='(';
                ansb+='(';
            }
            else{
                ansa+=')';
                ansb+=')';
            }
            one++;
        }
        else{
                if(zero%2==0){
                    ansa+='(';
                    ansb+=')';
                }
                else{
                    ansa+=')';
                    ansb+='(';
                }
            zero++;
        }
        // wh(ansa)wh(ansb)
    }
    cout<<ansa<<endl<<ansb<<endl;
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