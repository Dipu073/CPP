#include <bits/stdc++.h>
using namespace std;
//DJ
#define vi vector<int>
#define vll vector<ll>
#define mod1 1000000007
#define mod2 998244353
#define all(x) x.begin(), x.end()
#define FOR(a, i, b) for (ll i = a; i < b; i++)
#define rFOR(a, i, b) for (ll i = a; i >= b; i--)
 
typedef long long int ll;
typedef long int li;
 
void solve()
{
    ll n,q;cin>>n>>q;
    ll ctod=0,ctev=0,sum=0;
    FOR(0,i,n) {
        int x;cin>>x;sum+=x;
        if(x&1) ctod++;
        else ctev++;
    }
    FOR(0,i,q){
        int a,b;cin>>a>>b;
        if(a) {sum+=ctod*b;if(b&1) {ctev+=ctod;ctod=0;}}
        else {sum+=ctev*b;if(b&1) {ctod+=ctev;ctev=0;}}
        cout<<sum<<endl;
    }
}
 
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        // cout << "\n";
    }
    return 0;
}