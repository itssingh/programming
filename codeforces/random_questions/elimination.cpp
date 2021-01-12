#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t,a,b,c,d;
cin>>t;
while(t--){
    cin>>a>>b>>c>>d;
    cout<<max(a+b,c+d)<<"\n";
}
return 0;
}