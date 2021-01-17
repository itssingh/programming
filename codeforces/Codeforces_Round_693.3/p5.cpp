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
    cin>>n;
    vector<vector<ll>> arr( n , vector<ll> (2)); 
    for(int i = 0; i < n; i++){
            cin>>arr[i][0]>>arr[i][1];
    }
    for(int i=0;i<n;i++){
        flag=false;
        for(int j=0;j<n;j++){
            if((arr[j][0]<arr[i][0]  && arr[j][1]<arr[i][1]) || (arr[j][1]<arr[i][0] && arr[j][0]<arr[i][1])){
                cout<<j+1<<" ";
                flag=true;
                break;
            }
        }
            if(flag==false)
                cout<<"-1 ";
    }
    cout<<"\n";
 
}
return 0;
}