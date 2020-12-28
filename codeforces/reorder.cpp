#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll sum=0;
int main(){
int t,n;
ll m,num;
cin>>t;
while(t--){
    sum=0;
  cin>>n>>m;
  for (int i=0;i<n;++i){
      cin>>num;
      sum+=num;
  }
  if (sum==m) cout<<"YES"<<"\n";
  else cout<<"NO"<<"\n";
}
return 0;
}