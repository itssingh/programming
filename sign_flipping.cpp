#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t,n;
cin>>t;
while(t--){
    cin>>n;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        if(i%2==0 && a>0 ||i%2==1 && a<0)   a=-a;
        cout<<a<<" ";
    } 
    cout<<"\n"; 
}
return 0;
}