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
    int n;
    cin>>n;
    ll num=0;
    for(int i=1;i<n;i++){
        num+=i*i;
    }
    cout<<num<<"\n";
 
}
return 0;
}