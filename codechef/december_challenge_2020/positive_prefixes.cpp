#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool flag=true;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
    flag =true;
    int k,n;
    cin>>n>>k;
    if(k>n/2)
    {
        flag=false;
        k=n-k;
    }
    if(flag){
        for(int i=1;i<=n;i++){
        if(k && i%2==0){
            cout<<i<<" ";
            k--;
        }
        else{
            cout<<-i<<" ";
        }
    }
    }
    else{
        for(int i=1;i<=n;i++){
        if(k && i%2==0){
            cout<<-i<<" ";
            k--;
        }
        else{
            cout<<i<<" ";
        }
    }
    }
    cout<<"\n";
}
return 0;
}