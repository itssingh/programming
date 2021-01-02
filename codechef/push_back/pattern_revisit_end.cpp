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
    int k;
    cin>>k;
    int n=k/2 +1;
    for(int j=1;j<=n;j++){
    for(int i=1;i<=j;i++){
        if(i==1 || i==j)
            cout<<"*";
        else 
            cout<<" ";
    }
    cout<<"\n";
    }
    for(int i=n+1;i<=k;i++){
        int x=k+1-i;
        for(int j=1;j<=x;j++){
        if(j==1 || j==x)
            cout<<"*";
        else 
            cout<<" ";
    }
    cout<<"\n";
    }
}
return 0;
}