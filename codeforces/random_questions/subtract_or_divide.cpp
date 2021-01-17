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
    ll n;
    cin>>n;
    if(n==1){
        cout<<"0"<<"\n";
    }
    else if(n==2){
        cout<<"1"<<"\n";
    }
    else if(n==3 || n%2==0){
        cout<<"2"<<"\n";
    }
    else{
        cout<<"3"<<"\n";
    }
    
}
return 0;
}
