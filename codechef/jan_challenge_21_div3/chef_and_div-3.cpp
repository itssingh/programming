#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
bool flag=false;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
    int n;
    ll k,d,temp,no_days;
    cin>>n>>k>>d;
    ull total_prob=0;
    for(int i=0;i<n;i++){
        cin>>temp;
        total_prob+= temp;
    }
    no_days=total_prob/k;
    cout<<min(no_days,d)<<"\n";
}
return 0;
}