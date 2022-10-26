#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define pb push_back
#define mp make_pair
#define F first
#define S second
 
#define rep(i,a,b) for (int i = a; i < b; i++)
 
 
void solve(){
 
    int n;
    cin>>n;
   string str;
   cin>>str;  
 
 
   vector<char>st;
   for(int i=0;i<n;i++){
    if(str[i]=='Q'){
        st.push_back(str[i]);
    }else{
        if(!st.empty()){
            st.pop_back();
        }
    }
   }
   if(st.size()>0){
    cout<<"No"<<endl;
   }else{
    cout<<"Yes"<<endl;
   }
 
 
 
 
}
 
 
 
 
 
 
 
// int32_t main(){   
// fast_io;
int main(){
int q;
cin>>q;
for(int i=0;i<q;i++){
    solve();
  
}
 
 
 
return 0;
}