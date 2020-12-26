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
    int n,k,temp;
    cin>>n>>k;
    ll sum=0;
    while(n--){
        cin>>temp;
        sum+=temp;
    }
    if(sum%k==0)    cout<<"0\n";
    else    cout<<"1\n";
}
return 0;
}