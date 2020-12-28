#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
ll n,ul;
cin>>t;
while(t--){
    cin>>n;
    cout<<"2"<<"\n";
    for(ll i=0;i<n-1;++i){
        if(i==0||i==1)  ul=n;
        else ul=n-(i-1);
        cout<<ul<<"\t"<<n-(i+1)<<"\n";
    }
}
return 0;
}