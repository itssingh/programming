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
    cout<<n<<" ";
    for(int i=2;i<=n;i++){
        cout<<i-1<<" ";
    }
    cout<<"\n";
 
}
return 0;
}
