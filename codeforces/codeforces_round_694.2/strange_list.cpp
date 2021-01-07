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
    ll n, x,temp;
    cin>>n>>x;
    vector<ll> arr(n);arr.clear();
    unsigned long long sum=0;
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    ll no_process=1;
    for(ll i=0;arr[i]%no_process==0;i%=n){
        sum+=arr[i];
        if(i==n-1)
            no_process*=x;
        i++;
    }
    cout<<sum<<"\n";
}
return 0;
}