#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
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
    unsigned long long min_sum=0;
    double max_sum=0;
    for (int i=0;i<n;i++){
        cin>>temp;
        min_sum+=temp;
        if( temp%x!=0)
            max_sum+=(temp/x)+1;
        else 
            max_sum+=(temp/x);
    }
    if(min_sum%x)
        min_sum=floor(min_sum/x)+1;
    else 
        min_sum=floor(min_sum/x);
    cout<<min_sum<<" "<<max_sum<<"\n"; 
}
return 0;
}