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
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    vector<ll> cost(m);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end(),greater<int>());
    for(int j=0;j<m;j++){
        cin>>cost[j];
    }
    unsigned long long sum=0;
    int j=1;
    for(int i=0;i<n;i++){
        int k=arr[i];
        if(k>=j){
            sum+=cost[j-1];
            j++;
        }
        else{
            sum+=cost[k-1];
        }
    }
        cout<<sum<<"\n"; 
}
return 0;
}