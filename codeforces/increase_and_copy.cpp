#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t,p;
ll n;
cin>>t;
while(t--){
    cin>>n;
    p=sqrt(n);
    if(p*p==n)  cout<<2*p-2<<"\n";
    else cout<<2*p-1<<"\n";}
return 0;
}