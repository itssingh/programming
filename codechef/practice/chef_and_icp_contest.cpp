#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int n,k,temp,q;
ll m;
int count=0;
cin>>n>>m>>k;
while(n--){
    ll sum=0;
    for(int i=0;i<k;i++){
        cin>>temp;
        sum+=temp;
   }
    cin>>q;
    if(q<=10 && sum>=m) count++;
}
    cout<<count<<"\n";
return 0;
}
