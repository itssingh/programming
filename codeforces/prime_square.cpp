#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
int t,n;
cin>>t;
while(t--){
    cin>>n;
    if (n%2){
        for(int i=1;i<=n;++i){
        for (int j=1;j<=n;++j){
            if(i==j || j==n+1-i ||(i==(n+1)/2 && j==1) ||(i==1 && j==(n+1)/2))    cout<<"1"<<"\t";
            else     cout<<"0"<<"\t";
        }
        cout<<"\n";
      } 
    }
    else{
        for(int i=1;i<=n;++i){
        for (int j=1;j<=n;++j){
            if(i==j || j==n+1-i)    cout<<"1"<<"\t";
            else     cout<<"0"<<"\t";
        }
        cout<<"\n";
      }
    }
    
}
return 0;
}