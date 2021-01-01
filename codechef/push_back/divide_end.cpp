#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool flag=false;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
ll t;
cin>>t;
while(t--){
    ll n,x;
    flag=false;
    cin>>n;
    while(n){
        x=n%10;
        if(x%2==0){
            flag=true;
            break;
        }
        n/=10;   
    }
    if(flag)    
        cout<<"1\n";
    else
        cout<<"0\n";
}
return 0;
}