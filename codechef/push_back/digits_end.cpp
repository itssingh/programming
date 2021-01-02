#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    int sum=0; //sum of digits
    int m=n;
    while(n){
        sum+=n%10;
        n/=10;
    }
    m%sum?cout<<"No\n":cout<<"Yes\n";   
 
}
return 0;
}