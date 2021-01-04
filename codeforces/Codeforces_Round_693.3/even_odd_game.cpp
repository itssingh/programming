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
    ll alice=0;
    ll bob=0;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr.begin(),arr.end(),greater<int>());
    int i=0;
    while(i<n){
        if(arr[i]%2==0){
            alice+=arr[i];
            i++;
        }
        else 
            i++;
        if(i<n && arr[i]%2){
            bob+=arr[i];
            i++;
        }
        else 
            i++;
    }
    if(alice>bob)
        cout<<"Alice\n";
    else if(bob>alice)
        cout<<"Bob\n";
    else 
        cout<<"Tie\n";
}
return 0;
}