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
    ll x,temp;
    cin>>n>>x;
    ull min_sum=0;
    ull max_sum=0;
    for (int i=0;i<n;i++){
        cin>>temp;
        min_sum+=temp;
        max_sum+=(temp-1+x)/x;
    }
    min_sum=(min_sum-1+x)/x;
    cout<<min_sum<<" "<<max_sum<<"\n"; 
}
return 0;
}