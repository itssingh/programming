#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
    int n,c0,c1,h;
    cin>>n>>c0>>c1>>h;
    string s;
    cin>>s;
    int n0=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0')   n0++;
    }
    int n1=n-n0;
    if(c0==c1)
        cout<<n*c0<<"\n";
    else if((c0+c1)>(h+2*c1))   
        cout<<n0*h+n*c1<<"\n";
    else if((c0+c1)>(h+2*c0))
        cout<<n1*h+n*c0<<"\n";
    else
        cout<<n0*c0+n1*c1<<"\n";
}
return 0;
}
