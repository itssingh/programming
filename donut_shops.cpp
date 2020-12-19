#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t;
cin>>t;
ll a,b,c;
while(t--){
    cin>>a>>b>>c;
    if(a<c) cout<<"1";
    else cout<<"-1";
    cout<<"\t";
    if(a*b>c)   cout<<b;
    else cout<<"-1";
    cout<<"\n";
}
return 0;
}