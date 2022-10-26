#include <bits/stdc++.h>
using namespace std;
// DJ 
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
    ll n,ct1=0,ans=0;cin>>n;
    int a[n];
    FOR(0,i,n){
        cin>>a[i];
        if(a[i]==1) ct1++;
    }
    rFOR(n-1,i,0){
        if(a[i]==0){
            if(ct1) {ans++;ct1--;}
        }
        else ct1--;
        if(ct1==0) break;
    }
    cout<<ans;
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
        cout << "\n";
    }
    return 0;
}