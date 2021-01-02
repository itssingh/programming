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
    int n,rem;
    cin>>n;
    ll temp;
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        rem = temp%6;
        rem?sum+=rem:sum+=6;
    }
    cout<<sum<<"\n";
}
return 0;
}