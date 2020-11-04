#include<bits/stdc++.h>
#define ll long long
bool flag=true;
using namespace std;
int main(){
int t,n,x,temp;
cin>>t;
while(t--){
    flag=true;
    cin>>n>>x;
    vector<int> a(n+1);
    a[0]=0;
    for(int i=n;i>0;i--){
        cin>>a[i];
    }
    for(int i=1;i<n+1;++i){
        cin>>temp;
        if(a[i]+temp>x) flag=false;
    }
    if(flag)    cout<<"Yes"<<"\n";
    else cout<<"No"<<"\n";
    a.clear();
}
return 0;
}