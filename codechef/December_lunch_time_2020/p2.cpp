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
    int n;
    int count=0;
    string s,p;
    cin>>n;
    cin>>s>>p;
    for(int i=0;i<n && count>=0;i++){
        if(s[i]!=p[i]){
            if(s[i]=='1')   count++;
            else count--;
        }
    }
    if(count==0){
        cout<<"Yes\n";
    }
    else 
        cout<<"No\n";
}
return 0;
}