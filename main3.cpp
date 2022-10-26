#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<int,int> pi;
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"

#define rep(i,a,b) for (ll i = a; i < b; i++)

void solve()
{
   ll n; cin>>n;
   vi v(n);
   for(int i = 0;i<n;i++)
   {
    cin>>v[i];
   } 
   sort(v.begin(),v.end());
   ll cnt = 1;
   for(int i = 0;i<n-1;i++)
   {
    if(v[i] >= v[i+1])
    {
        continue;
    }
    else
    cnt++;
   }
cout<<cnt<<endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);


    solve();

}