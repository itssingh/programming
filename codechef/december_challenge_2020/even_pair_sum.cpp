#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
ll a,b;
cin>>t;
while(t--){
    cin>>a>>b;
    ll a_e,a_o,b_e,b_o,total;
    a_e=a/2;
    a_o=a-a_e;
    b_e=b/2;
    b_o=b-b_e;
    total=a_e*b_e+a_o*b_o;
    cout<<total<<"\n";

}
return 0;
}