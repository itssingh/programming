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
    vector<ll>arr(n);
    string s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int intimidate=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1] )
            s.push_back('h');
        else if(arr[i]<arr[i-1] && arr[i]<arr[i+1])
            s.push_back('v');
        else 
            s.push_back('n');
    }
    
 
}
return 0;
}