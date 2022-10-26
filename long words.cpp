#include<iostream>
using namespace std;
 
 
int main(){
 
int t;
cin>>t;
while(t--){
    string s;
    cin>>s;
    int n = s.size();
    if(n<=10){
        cout<<s;
    }
    else{
        cout<<s.front()<<n-2<<s.back();
    }
    cout<<endl;
}
 
return 0;
}