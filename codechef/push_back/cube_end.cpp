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
    int sum=0;
    for(int i=1;i<n;i++){
        sum+=2*i*i*i;

    }
        sum+=n*n*n;
        cout<<sum<<"\n"; 
}
return 0;
}