#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t,n,k,m;
ll sum; 
cin>>t;
while(t--){
    cin>>n>>k;
    m=n*k; sum=0;
    ll arr [m];
    int indx=ceil(n/2);
    for(int i=1;i<=m;i++)    
        cin>>arr[i];
    m-=indx;
    while(k--){
        sum+=arr[m];
        m-=(indx+1);
    }
    cout<<sum<<"\n";
}
return 0;
}
