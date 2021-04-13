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
    string s;
    cin>>s;
    int n=sz(s);
    map<char,int> count;
    for(int i=0;i<n;++i){
        s[i]=s[i]-'a';
        count[s[i]]++;
    }
    string ans=s;
    for(int i=0;i<n;++i){
        if(count[s[i]]==1){
            continue;
        }
        if(s[i]<=s[i+1]){
            count[s[i]]--;
            ans[i]='a';
        }
        else{
            
        }

    }
    for(int i=0;i<n;++i){
        if(ans[i]!='a'){
            cout<<(char)(ans[i]+'a');
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