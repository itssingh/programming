#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool flag=false;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
    int w,h;
    ll n;
    cin>>w>>h>>n;
    int count=1;
    while(w%2==0){
        w/=2;
        count*=2;
    }
    while(h%2==0){
        h/=2;
        count*=2;
    }
    if(count>=n)    cout<<"Yes\n";
    else    cout<<"No\n";
 
}
return 0;
}