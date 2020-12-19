#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
    ll a,b,c;
    cin>>a>>b>>c;
    ull sum=a+b+c-2;
    if(sum%7 !=0)
        cout<<"NO\n";
    else
        cout<<"YES\n";
}
return 0;
}